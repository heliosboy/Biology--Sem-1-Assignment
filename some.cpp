#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;
class SIR
{
	private:
	double t,S,I,R,Pop[3];
	double dPop[3],step;
	double beta, gamma;
	double tmax;
	public:
	SIR ();
	SIR (double beta0, double gamma0, double step0, double S00, double I00, double tmax0);
	//~SIR();
	void Diff(double Pop[3]);
	void Euler();
	void Solve_Eq();
};

// Initialise the equations and Runge-Kutta integration
SIR::SIR(double beta0, double gamma0, double step0,double S00, double I00, double tmax0)
{
	beta = beta0;
	gamma =gamma0;
	step = step0;
	S =S00;
	I = I00;
	R = 1 - S - I;
	tmax = tmax0;
}
/*SIR::~SIR(){
cout <<"delete SIR"<<endl;
}*/
void SIR::Diff(double Pop[3])
{
	// The differential equations
	dPop[0] = - beta*Pop[0]*Pop[1];              // dS/dt
	dPop[1] = beta*Pop[0]*Pop[1] - gamma*Pop[1];   // dI/dt
	dPop[2] = gamma*Pop[1];                    // dR/dt
}
void SIR::Euler()
{
	int i;
	double dPop1[3];
	double tmpPop[3], initialPop[3];
	/* Integrates the equations one step, using Runge-Kutta 4
	Note: we work with arrays rather than variables to make the
	coding easier */
	initialPop[0]=S; initialPop[1]=I; initialPop[2]=R;
	Diff(initialPop);
	for(i=0;i<3;i++)
	{
		dPop1[i]=dPop[i];
		tmpPop[i]=initialPop[i]+step*dPop1[i];
	}
	S=tmpPop[0]; I=tmpPop[1]; R=tmpPop[2];
}
void SIR::Solve_Eq()
{
	t=0;
	cout <<"t 		S 	   I 		 R"<<endl;
	ofstream myfile;
  	myfile.open ("example.txt");
  	myfile << "t 		S        I 			R"<<endl;
  	do
	{
		Euler();
		t+=step;
		cout<<t<<"   "<<S<<"   "<<I<<"   "<<R<<"   "<<endl;
		myfile <<t<<" "<<S<<" "<<I<<" "<<R<<endl;
	}
	while(t<tmax);
	myfile.close();
}

int main(int argc, char** argv)
{
	double beta0 = 1.5;
	double gamma0 =0.2;
	double I00 = 1e-6;
	double S00 =1-I00;
	double tmax0 = 50;
	/* Find a suitable time-scale for outputs */
	double step0=0.01/((beta0+gamma0)*S00);
	SIR mySIR(beta0, gamma0,step0,S00,  I00,  tmax0);
	mySIR.Solve_Eq();
	return(0);
}