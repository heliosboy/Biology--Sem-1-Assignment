#include<iostream>
#include<ctime>
#include<cstring>
#include<cstdlib>
#include<unistd.h>
using namespace std;
class microbe
{
	public:
	int BER,BMR,continenti, ncqr, revived; //revived=1 or 0
	microbe()
	{
		BER=10;//CHANGED
		ncqr=0;
		revived=0;
		BMR=5;
	}
	void mutate(int BMR, int BER)
	{
		  int lowestRate = 3;
		  int mutaratemp;
		  int BER_rise_min = 5;
		  int BER_rise_max = 15;
		  int BER_rise;
		  int highestRate = 8;
		  int mutarate;
		  int mutanum;
		  int mutafirst = 1;
		  int BER_fall;
		  int mutalast = 10;
		  string mutaname;
		  int spreadrate = 5;
		  while(BER!=0)
		  {
		    srand (time (NULL));
		    mutarate = rand () % ((highestRate - lowestRate) + 1) + lowestRate;
		    mutaratemp=mutarate;
		    for (int i = mutarate; i > 0; i--)
		      {
		        cout << "You will receive a mutation in " << mutarate << " turns." <<
		  	endl;
		        --mutarate;
		        sleep (0.5);
		      }
		    mutanum = rand () % ((mutalast - mutafirst) + 1) + mutafirst;
		    if (mutarate == 0)
		      cout << "You have received a new mutation! It is mutation number " <<
		        mutanum << ". "<<endl;
		    switch (mutanum)
		    {
		      case 1:
		        mutaname = "Favoured spread";
		        cout << mutaname <<	endl;
		        spreadrate = 4;
		        break;
		      case 2:
		        mutaname = "Impeded spread";
		        cout << mutaname <<endl;
		        spreadrate = 6;
		        break;
		      case 3:
		        mutaname = "Strain Evolution";
		        cout <<  mutaname <<endl;
		        BER_rise = rand () % ((BER_rise_max - BER_rise_min) + 1) + BER_rise_min;
		        BER = BER + BER_rise;
		        cout <<BER << ". "<<endl;
		        break;
		      case 4:
		        mutaname = "Strain Extinction";
		        cout <<  mutaname <<endl;
		        BER_fall = rand () % ((5 - 1) + 1) + 1;
		        BER = BER - BER_fall;
		        cout << "The new rate of eradication is: " << BER << ". "<<endl;
		        break;
		      case 5:
		        mutaname = "Severe Symptoms";
		        cout <<  mutaname<<endl;
		        highestRate = highestRate - 1;
		        lowestRate = lowestRate - 1;
		        break;
		      case 6:
		        mutaname = "Weakening Symptoms";
		        cout <<  mutaname<<endl;
		        highestRate = highestRate + 1;
		        lowestRate = lowestRate + 1;
		        break;
		      case 7:
		        mutaname = "Antibiotic Resistance";
		        cout <<  mutaname<<endl;
		  	    BER_rise_min=2;
		    	  BER_rise_max=12;
		    	  BER=1.1*BER;
		    	  cout<<"You now have "<<BER<<" turns left before eradication."<<endl;
		    	  break;
		  	  case 8:
		  	    mutaname = "Medical R&D";
		        cout <<  mutaname <<endl;
		    	  BER_rise_min=7;
		    	  BER_rise_max=17;
		    	  BER=0.9*BER;
		    	  cout<<"You now have "<<BER<<" turns left before eradication."<<endl;
		    	  break;
		  	  case 9:
		  	    mutaname="Colonization!";
		  	    cout<<mutaname<<endl;
		  	    break;
		  	    default:
		  	    cout<<" Maybe  next time! "<<endl;
		    }
		    cout << spreadrate << ". "<<endl;
		    BER--;
		    cout<<"You have "<<BER<<" turns before eradication."<<endl;
		    sleep(0.5);
		  }
	}
		 //Krishna's mutation function goes here
		  //Added!
	void contbonus(microbe mcrb);
}mcrb;

class place
{
	public:
	int biometype,continent,BCR,cqr,disease,resnull=0; //cqr checks if the biome in question has been owned or not
	char name[50];
	place *neighbour[6];
	place()
	{
		cqr=0;
	}
	int assignbcr(microbe mcrb); //ncqr is a global/in scope int variable wrt to the object denoting how many biomes have been conquered 
	void gotoneigh(place *current,microbe mcrb)
	{
		int b;
		st:	
		srand(time(NULL));	
		b=(rand()%5)+1; 		
		if(neighbour[b]->cqr==0)
		{
			current=current->neighbour[b];
			current->assignbcr(mcrb);
		}
		else
		{
			int chkemp=0;
			for(int i=0;i<5;i++)
			{
				if(neighbour[i]->cqr==0)
				chkemp=1;
			}
			if(chkemp=1)
			goto st;
			else
			cout<<endl<<"Continent CONQUERED!";
			//gotta think of intercontinental migration
		}
	}	
}Biome[36],*current;
int countdn(microbe mcrb, place *current)
{
	current->assignbcr(mcrb);
	while(mcrb.BER!=0)
	{
		current->BCR--;
		mcrb.BER--;
		mcrb.BMR--;
		if(mcrb.BMR==0)
		mcrb.mutate(mcrb.BMR,mcrb.BER);//call functions and code that runs for each step here and modify the parameters of this function as necessary
		if(current->BCR==0)
		{
			current->gotoneigh(current,mcrb);
		}
	}
}
void Africa(place *current, microbe mcrb)
{
	int m=rand()%100;
	if(m>=1&&m<=15&&mcrb.BER==200)//200 = initial value of ber	
	current->BCR--;
}
void Asia(microbe )
{
	int m=rand()%100;
	if(m>=1&&m<=25&&mcrb.BMR==0)
	mcrb.mutate(mcrb.BMR,mcrb.BER);//whatever you have named the mutation choice function
}
void Europe(microbe mcrb)
{
	if(mcrb.BMR==0)
	mcrb.BER-=5;
}	
void NAm()
{
	if(current->cqr==1&&current->BCR==0)
	{
		srand(time(NULL));
		int m=rand()%5;
		if(m==0)
		{		
			current->gotoneigh(current,mcrb);
			current->cqr=1;
		}
	}
}
inline void Oceania(place *current, microbe mcrb)
{
	srand(time(NULL));	
	int m=rand()%100;
	if(mcrb.continenti==5&&m>=1&&m<=15)
	current->resnull=1;
}
void SAm(microbe mcrb)
{
	srand(time(NULL));
	int m=rand()%100;	
	if(mcrb.revived==0&&mcrb.BER==0) //revived is an int variable that checks if Lazarus is not trying to cheat the reaper for the second time
	{
		if(m>=1&&m<=25)
		mcrb.BER=10;
	}
}
void microbe::contbonus(microbe mcrb)
{
		switch (mcrb.continenti)
		{
			case 1:Asia(mcrb);
				break;
			case 2:Africa(current,mcrb);
				break;
			case 3:SAm(mcrb);
				break;
			case 4:NAm();
				break;
			case 5://Oceania() is called elsewhere
				break;
			case 6:Europe(mcrb);
				break;
			default:break;
		}
}
int place::assignbcr(microbe mcrb)
{
		BCR=5;
		int strength=0;
		if(mcrb.BER==200)
		Oceania(current,mcrb);
		switch (biometype)
		{
			case 1:if(disease==1||disease==4)
			       BCR--;
				else if(disease==3)
				{	
					if(resnull==1)			
					BCR++;
				}
				break;
			case 2:if(disease==3||disease==1)
			       BCR--;
				else if(disease==2)
				{	
					if(resnull==1)			
					BCR++;
				}
				break;
			case 3:if(disease==3||disease==4)
			       BCR--;
				else if(disease==1)
				{	
					if(resnull==1)			
					BCR++;
				}
				break;
			case 4:if(disease==2||disease==4)
			       BCR--;
				else if(disease==1)
				{	
					if(resnull==1)			
					BCR++;
				}
				break;
			case 5:if(disease==1||disease==2)
			       BCR--;
				else if(disease==4)
				{	
					if(resnull==1)			
					BCR++;
				}
				break;
			case 6:if(disease==2||disease==3)
			       BCR--;
				else if(disease==4)
				{	
					if(resnull==1)			
					BCR++;
				}
				break;
			default://Lol srsly?
				break;
		}
		if(mcrb.ncqr>20&&mcrb.ncqr<=30)
		BCR++;
		else if(mcrb.ncqr>30)
		BCR+=2;
}

int main()
{
	int a,b,c,cont;
	strcpy(Biome[0].name,"Gangetic Plains\0");
	strcpy(Biome[1].name,"Pamir Knot\0");
	strcpy(Biome[2].name,"Borneo\0");
	strcpy(Biome[3].name,"Karakum\0");
	strcpy(Biome[4].name,"Indian Peninsula\0");
	strcpy(Biome[5].name,"Indonesian Archipelago\0");
	strcpy(Biome[6].name,"Serengeti and Okavango Deltas\0");
	strcpy(Biome[7].name,"Kilimanjaro\0");
	strcpy(Biome[8].name,"Congo Rainforest\0");
	strcpy(Biome[9].name,"Sahara\0");
	strcpy(Biome[10].name,"Bight of Benin, Horn of Africa, Gulf of Africa\0");
	strcpy(Biome[11].name,"Madagascar\0");
	strcpy(Biome[12].name,"Pampas, Pantanal\0");
	strcpy(Biome[13].name,"Andes\0");
	strcpy(Biome[14].name,"Amazon\0");
	strcpy(Biome[15].name,"Atacama\0");
	strcpy(Biome[16].name,"Humboldt Current Region\0");
	strcpy(Biome[17].name,"Galapagos, Easter and Falkland\0");
	strcpy(Biome[18].name,"Prairies\0");
	strcpy(Biome[19].name,"Rockies\0");
	strcpy(Biome[20].name,"Central American Rainforest\0");
	strcpy(Biome[21].name,"Mojave\0");
	strcpy(Biome[22].name,"Eastern and Western Seaboard\0");
	strcpy(Biome[23].name,"Aleutians, Hawaii, Caribbean\0");	
	strcpy(Biome[24].name,"Canterbury\0");
	strcpy(Biome[25].name,"South Alps\0");		
	strcpy(Biome[26].name,"Papua New Guinea\0");
	strcpy(Biome[27].name,"Great Victoria Desert\0");
	strcpy(Biome[28].name,"Great Barrier Reef\0");
	strcpy(Biome[29].name,"South Pacific\0");
	strcpy(Biome[30].name,"Steppes\0");
	strcpy(Biome[31].name,"Alps\0");
	strcpy(Biome[32].name,"Taiga\0");
	strcpy(Biome[33].name,"Scandinavia\0");
	strcpy(Biome[34].name,"Baltic Coast\0");
	strcpy(Biome[35].name,"Spanish Islands\0");
	for(int i=0;i<36;i++)
	{
		for(int j=0,k=0;j<6;j++)
		{		
			if((i%6)!=j)
			{
				Biome[i].neighbour[k]=&Biome[6*(i/6)+j];
				k++;
			}
		}
}
  cout<<"What is your name, dear friend?"<<endl;
  string player_name;
  getline(cin, player_name);
  cout<<"Now, my beloved plague-mongerer, "<<player_name<<", it's time to select your Weapon, a.k.a. disease."<<endl;
  cout<<"ANTHRAX"<<endl;
  cout<<"Press any number to continue."<<endl;
  cin>>a;
  cout<<"CHOLERA."<<endl;
  cout<<"Press any number to continue."<<endl;
  cin>>b;
  cout<<"TUBERCULOSIS."<<endl;
  cout<<"Press any number to continue."<<endl;
  cin>>c;
  cout<<"Bubonic Plague. The only disease that does not need bold case."<<endl;
  cout<<"Hope you have made a choice!"<<endl;
  cout<<"ANTHRAX : 1"<<endl;
  cout<<"CHOLERA : 2"<<endl;
  cout<<"TUBERCULOSIS : 3"<<endl;
  cout<<"Bubonic Plague : 4"<<endl;
  label:
  int disease_choice;
  string disease_name;
  cin>>disease_choice;
  switch(disease_choice)
   {
        case 1:
            disease_name="Anthrax";
            cout<<"Anthrax! "<<player_name<<"! ";
            break;
        case 2:
            disease_name="Cholera";
            cout<<"Cholera! "<<player_name<<"! ";
            break;
        case 3:
            disease_name="Tuberculosis";
            cout<<"Tuberculosis! "<<player_name<<"! ";
            break;
        case 4:
            disease_name="Bubonic Plague";
            cout<<"Bubonic Plague! "<<player_name<<"! ";
            break;
        default:
            cout<<"Fuck YOU"<<endl;
            goto label;
   }
	cout<<endl<<"Choose a continent"<<endl<<"1.Asia"<<endl<<"2.Africa"<<endl<<"3.South America"<<endl<<"4.North America"<<endl<<"5.Oceania"<<endl<<"6.Europe"<<endl;
	cin>>cont;
	srand(time(NULL));
	int bmi=rand()%6;
	bmi+=(cont)*10;
	current=&Biome[bmi];
	countdn(mcrb,current);
    sleep(0.5);
	mcrb.contbonus(mcrb);
	for(int i=0;i<36;i++)
	{
		Biome[i].biometype=((i+1)%6)+1;
		Biome[i].continent=(i/6)+1;
	}
			
	return 0;
}
