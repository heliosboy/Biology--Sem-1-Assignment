#include<iostream>
#include<cstring>
#include<cstdlib>
#include<unistd.h>
using namespace std;
int main ()
{
	string disease_Name;
	int vir =10, res=10, life=10, rep=10, hvir=10,hres=10, hlife=10, hrep=10;
	int initial_Pop=100, t;
	int n = initial_Pop;
	
	//cout<<"Hello player ! This is a simple simulation of how a disease spreads "<<endl<<endl;
	//cout<<"Think of a suitable name for pathogen's disease and enter it ";
	cin>>disease_Name;
	cout<<endl;
	//cout<<disease_Name<<" has the following characteristics which determine how effectively it spreads and kills "<<endl;	
	//cout<<"1. Virulence - how good the disease is at killing people "<<endl;
	//cout<<"2. Resistance - how well the pathogens can resist environmental changes "<<endl;
	//cout<<"3. Lifespan - how long the bacterium can live "<<endl;	 
	//cout<<"4. Reproduction - how quickly the bacterium can reproduce "<<endl;
	//cout<<endl<<endl;
	//cout<<"Mutations occur randomly and therefore on every odd turn, pathogen's disease could recieve a mutation that affects its 4 characteristics. Your lifespan will decrease by 1 each turn "<<endl<<endl;
	
	for (t = 10; t>0; t--)
	{
		cout<<"A mutation shall occur shortly."<<endl;
		for (int i=0;i<5;i++)
		{
			cout<<"."<<endl;
			sleep(1);
		}
		if (t%2==1) 
		{
			int r =  rand()%10;
			if (r == 0) 
			{
				cout<<"Sorry, "<<disease_Name<<" did not recieve a mutation "<<endl;
			} 
			else if (r == 1) 
			{
				vir+=1;
				cout<<"This mutation has increased pathogen's virulence ! ";
				cout<<"Your virulence is "<<vir<<endl;
			}
			else if (r == 2) 
			{
				res+=1;
				cout<<"This mutation has increased pathogen's resistance ! ";
				cout<<"Your resistance now is "<<res<<endl;
			}
			else if (r == 3) 
			{
				life+=1;
				cout<<"This mutation has increased pathogen's lifespan ! ";
				cout<<"Pathogen's lifespan is "<<life<<endl;
			}
			else if (r == 4) 
			{
				rep+=1;
				cout<<"This mutation has increased pathogen's reproduction rate ! ";
				cout<<"Pathogen's reproduction rate is "<<rep<<endl;
			}
			else if (r == 5) 
			{
				vir-=1;
				cout<<"This mutation has decreased pathogen's virulence ! ";
				cout<<"Pathogen's virulence is is "<<vir<<endl;
			}
			else if (r == 6) 
			{
				res-=1;
				cout<<"This mutation has decreased pathogen's resistance ! ";
				cout<<"Your resistance now is "<<res<<endl;
			}
			else if (r == 7) 
			{
				life-=1;
				cout<<"This mutation has decreased pathogen's lifespan ! ";
				cout<<"Pathogen's lifespan is "<<life<<endl;
			}
			else if (r == 8) 
			{
				rep-=1;
				cout<<"This mutation has decreased pathogen's reproduction rate ! ";
				cout<<"Pathogen's reproduction rate is "<<rep<<endl;
			}
			else if (r == 9)
			{
				cout<<"Sorry, "<<disease_Name<<" did not recieve any mutation."<<endl;
			}
			life --;
			cout<<"############################"<<endl;
		}
		if (t%2==0) 
		{
			int r =  rand()%10;
			if (r == 0) 
			{
				cout<<"Sorry, Humans did not recieve a mutation "<<endl;
			} 
			else if (r == 1) 
			{
				hres+=1;
				cout<<"This mutation has increased Human resistance ! ";
				cout<<"Human resistancce is "<<hres<<endl;
			}
			else if (r == 2) 
			{
				hvir+=1;
				cout<<"This mutation has increased human virulence ! ";
				cout<<"Human fightback effort now is "<<hvir<<endl;
			}
			else if (r == 3) 
			{
				hlife+=1;
				cout<<"This mutation has increased human lifespan ! ";
				cout<<"human lifespan is "<<hlife<<endl;
			}
			else if (r == 4) 
			{
				hrep+=1;
				cout<<"This mutation has increased human body size ! ";
				cout<<"human reproduction rate is "<<hrep<<endl;
			}
			else if (r == 5) 
			{
				hres-=1;
				cout<<"This mutation has decreased human resistance ! ";
				cout<<"Pathogen's virulence is "<<hres<<endl;
			}
			else if (r == 6) 
			{
				hvir-=1;
				cout<<"This mutation has decreased pathogen's resistance ! ";
				cout<<"Your resistance now is "<<res<<endl;
			}
			else if (r == 7) 
			{
				hlife-=1;
				cout<<"This mutation has decreased human lifespan ! ";
				cout<<"human lifespan is "<<life<<endl;
			}
			else if (r == 8) 
			{
				hrep-=1;
				cout<<"This mutation has decreased human body size ! ";
				cout<<"human body size is "<<hrep<<endl;
			}
			else if (r == 9)
			{
				cout<<"Sorry, Humans did not recieve any mutation."<<endl;
			}
			life --;
			cout<<"####################################"<<endl;
		}
	}
}
	

	

