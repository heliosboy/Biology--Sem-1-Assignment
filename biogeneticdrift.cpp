#include <iostream>
#include <cstring>
#include <unistd.h>
using namespace std;
void filial1(int& a,int& b,int& c,int& d,int& e);
void filial2(int& a,int& b,int& c,int& d,int& e);
int main()
{
	string pathogen;
	cout<<"Hello guest, you are here to witness a simple code that explains something big!"<<endl;
	sleep(2);
	cout<<"For that, you first need to name your pathogen."<<endl;
	sleep(2);
	cout<<"So, let us get moving!"<<endl;
	sleep(2);
	cout<<"What is the name of your pathogen?"<<endl;
	getline(cin, pathogen);
	cout<<endl;
	int vir, res, rep, life, gennum;
	vir=10, res=10, rep=10, life=10;
	sleep(2);
	cout<<"Here are the stats of the first ancestor : "<<endl;
	cout<<endl;
	cout<<"Virulence : 10 "<<endl;
	cout<<"Resistance : 10"<<endl;
	cout<<"Reproduction rate : 10"<<endl;
	cout<<"Lifespan : 10"<<endl;
	cout<<endl;
	cout<<endl;
	sleep(2);
	cout<<"Filial, here, refers to the entities we  will encounter in the next few lines."<<endl;
	sleep(2);
	cout<<"They are the descendent of the first ancestor we have seen."<<endl;
	sleep(2);
	cout<<"Please, enter any positive integer"<<endl;
	cout<<endl;
	sleep(2);
	cout<<"Enter the filial number."<<endl;
	cin>>gennum;
	cout<<endl;
	sleep(2);
	filial1(vir,res,rep,life,gennum);
	cout<<endl;
	sleep(2);
	filial2(vir,res,rep,life,gennum);
	cout<<"We find that all of the characters in a given species undergo changes over long periods of time."<<endl;
	sleep(2);
	cout<<"Why?"<<endl;
	sleep(2);
	cout<<"This is because of some specific case of evolution, THE GENETIC DRIFT ! "<<endl;
	sleep(2);
	cout<<endl;
	cout<<endl;
	cout<<"NOTE: We are assuming that all the changes in the trait values are random."<<endl;
	cout<<"Thank You for your time and consideration"<<endl;
	return 0;
}
void filial1(int& a,int& b,int& c,int& d,int& e)
{
	int r1=rand()%2;
	int r2=rand()%2;
	int r3=rand()%2;
	int r4=rand()%2;
	int a1,b1,c1,d1;
	a1=a,b1=b,c1=c,d1=d;
	for (int i=0;i<e;i++)
	{
		a1=a1+r1;
	}
	for (int i=0;i<e;i++)
	{
		b1=b1+r2;
	}
	for (int i=0;i<e;i++)
	{
		c1=c1+r3;
	}
	for (int i=0;i<e;i++)
	{
		d1=d1+r4;
	}	
	a1=a1%10,b1=b1%10,c1=c1%10,d1=d1%10;
	a+=a1,b+=b1,c+=c1,d+=d1;
	cout<<"Down below are the stats of one of the members in of your selected generation"<<endl;
	cout<<"Virulence : "<<a<<endl;
	cout<<"Resistance : "<<b<<endl;
	cout<<"Reproduction rate : "<<c<<endl;
	cout<<"Lifespan : "<<d<<endl;
}
void filial2(int& a,int& b,int& c,int& d,int& e)
{
	int r1=rand()%2;
	int r2=rand()%2;
	int r3=rand()%2;
	int r4=rand()%2;
	int a1,b1,c1,d1;
	a1=a,b1=b,c1=c,d1=d;
	for (int i=0;i<e;i++)
	{
		a1=a1+r1;
	}
	for (int i=0;i<e;i++)
	{
		b1=b1+r2;
	}
	for (int i=0;i<e;i++)
	{
		c1=c1+r3;
	}
	for (int i=0;i<e;i++)
	{
		d1=d1+r4;
	}	
	a1=a1%10,b1=b1%10,c1=c1%10,d1=d1%10;
	a+=a1,b+=b1,c+=c1,d+=d1;
	cout<<"Down below are the stats of another of the members in of your selected generation"<<endl;
	cout<<"Virulence : "<<a<<endl;
	cout<<"Resistance : "<<b<<endl;
	cout<<"Reproduction rate : "<<c<<endl;
	cout<<"Lifespan : "<<d<<endl;
}