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
	ofstream myfile;
  	myfile.open ("b.txt");
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
void inicon(double& a,double& b,double& c,double& d)
{
	cout<<"Enter the value of beta0 : "<<endl;
	cout<<"Remember, it should be a value in the range 0-0.3"<<endl;
	cin>>a;
	cout<<"Enter the value of gamma0 : "<<endl;
	cout<<"Remember, it should be a value in the range 0-0.2"<<endl;
	cin>>b;
	cout<<"Enter the value of I00 : "<<endl;
	cout<<"Remember, it should be a value in the range 0-0.1"<<endl;
	cin>>c;
	cout<<"Enter the value of tmax0 : "<<endl;
	cout<<"Remember, it should be a value in the range 800-10000"<<endl;
	cin>>d;
}
int main(int argc, char** argv)
{
	double beta0;
	double gamma0;
	double I00;
	double tmax0;
	double S00 =1-I00;
	inicon(beta0,gamma0,I00,tmax0);
	if (beta0<=0.3 && beta0>=0 && gamma0<=0.2 && gamma0>=0 && I00<0.1 && I00>=0 && tmax0<10000 && tmax0>00)
	{
	/* Find a suitable time-scale for outputs */
		double step0=0.01/((beta0+gamma0)*S00);
		SIR mySIR(beta0, gamma0,step0,S00,  I00,  tmax0);
		mySIR.Solve_Eq();
		return(0);
	}
	else
	{
		cout<<"Try some better values!"<<endl;
		inicon(beta0,gamma0,I00,tmax0);
	}	
}
