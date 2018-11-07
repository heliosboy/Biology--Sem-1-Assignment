#include <iostream>
#include <cstring>
using namespace std;
void filial1(int& a,int& b,int& c,int& d,int& e);
void filial2(int& a,int& b,int& c,int& d,int& e);
int main()
{
	string pathogen;
	cout<<"What is the name of your pathogen?"<<endl;
	getline(cin, pathogen);
	int vir, res, rep, life, gennum;
	vir=10, res=10, rep=10, life=10;
	cout<<"Enter the filial number."<<endl;
	cin>>gennum;
	cout<<endl;
	filial1(vir,res,rep,life,gennum);
	cout<<endl;
	filial2(vir,res,rep,life,gennum);
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
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
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
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
}