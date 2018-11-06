#include<iostream>
#include<cstring>
#include<unistd.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Welcome to Epidemica, the disease spread simulator!"<<endl;
  cout<<"Here, you play the role of a deadly disease whose sole purpose is to clense the world!"<<endl;
  cout<<"From what?"<<endl;
  cout<<"Deep down you know the answer!"<<endl;
  cout<<"HUMANS!"<<endl;
  cout<<"Before we begin the assault, let us have some formalities brushed aside."<<endl;
  cout<<"What is your name, dear friend?"<<endl;
  string player_name;
  getline(cin, player_name);
  cout<<"Well, welcome, "<<player_name<<"!"<<endl;
  cout<<"In a short while, we will be a deadly disease and we will be infecting our first human!"<< endl;
  cout<<"What's your goal in this 'Madness'?"<<endl;
  cout<<"Are you inspired by Thanos to slay half of all life for the good life itself?"<< endl;
  cout<<"Or are you a purist disease seeking to cleanse planet Earth of its most widespread disease."<<endl;
  cout<<"Deep down you know the answer!"<<endl;
  cout<<"FILTHY HUMANS?"<<endl;
  cout<<"Ah, but is your real motive simply the base desire of you surviving the longest while others simply 'perish'?"<<endl;
  cout<<"Or you just want to kill some humans!"<<endl;
  cout<<"A LOT of them"<<endl;
  cout<<"Whatever your motives are, we don't judge."<<endl;
  cout<<"Do know that humanity will not be an easy foe; they will fight back, and will fight hard, real hard!"<< endl;
  cout<<"With this said, let's get you your weapon!"<<endl;
  cout<<"Now, my beloved plague-mongerer, "<<player_name<<", it's time to select your Weapon, a.k.a. disease."<<endl;
  cout<<"Your choices shall appear any moment now."<<endl;
  cout<<"A word of caution my friend, these are some of the most virulent things to hit humanity"<<endl;
  cout<<"Both in the past, the present and possibly in the future: "<<endl;
  cout<<"Every disease has a 'Homeground' or its Locale. This is where it is the strongest."<<endl;
  cout<<"There are places where this disease is useless!"<<endl;
  cout<<"Keep this in your mind and proceed with the game!"<<endl;
  cout<<"When you are prompted to enter the name of your weapon, enter a number from 1 to 4."<<endl;
  cout<<"Remember, each disease is number coded."<<endl;
  cout<<"Drumroll: "<<endl;
  for (int i=0;i<10;i++)
    {
        cout << ". "<<endl;
        sleep(1);
    }
  cout<<"ANTHRAX"<<endl;
  cout<<"Caused by Bacillus anthracis, Anthrax have spores that can live for a long, long time."<< endl;
  cout<<"Its symptoms include high fever, fatigue, flu-like symptoms, shock, and in later stages, meningitis. "<<endl;
  cout<<"A recent developments in biowarfare created inhalatory anthrax, the most dangerous form of anthrax you can get."<<endl;
  cout<<"Anthrax is strong in Coasts, Mountains, and Plains Biomes, but is weak in Forests and Desert-Plateau-Mesa Biomes."<<endl;
  cout<<"Press any number to continue."<<endl;
  cin>>a;
  cout<<"CHOLERA."<<endl;
  cout<<"Caused by the bacterium Vibrio cholerae, Cholera is spread through contaminated water."<<endl;
  cout<<"The rampant pollution of drinking water sources has led to cholera being a highly communicable disease."<<endl;
  cout<<"Its symptoms include diarrhoea, dehydration, vomiting and cramps."<<endl;
  cout<<"Cholera is strong in Desert-Plateau-Mesa, Coasts, and Island Biomes, but is weak in Mountain biomes."<<endl;
  cout<<"Press any number to continue."<<endl;
  cin>>b;
  cout<<"TUBERCULOSIS."<<endl;
  cout<<"Caused by the bacterium Mycobacterium tuberculosis, tuberculosis, a.k.a. consumption, phthisis or just TB, is a deadly disease that spreads via air."<<endl;
  cout<<"Increasing population presents a problem in maintaining people at a 'safe' distance."<<endl;
  cout<<"This could be a jackpot!"<<endl;
  cout<<"Tuberculosis is strong in Mountains, Forests, and Island biomes, but is weak in Plains biomes."<<endl;
  cout<<"Press any number to continue."<<endl;
  cin>>c;
  cout<<"Bubonic Plague. The only disease that does not need bold case."<<endl;
  cout<<"Caused by the bacterium Yersinia pestis, mainly spreads through the bite of an infected flea."<<endl;
  cout<<"Proliferation of rats in urban areas, and their fleas has brought about a rise of bubonic plague cases."<<endl;
  cout<<"It can also spread through direct contact with the infected body tissue or bodily fluids."<<endl;
  cout<<"Its symptoms include buboes (lymphnode swellings), flu-like symptoms, chills, headaches, and fatigue."<<endl;
  cout<<"Bubonic Plague is strong in Plains, Forests and Desert-Plateau-Mesa biomes, but is weak in Coasts and Island biomes."<<endl;
  sleep(2);
  cout<<"Hope you have made a choice!"<<endl;
  cout<<"ANTHRAX : 1"<<endl;
  cout<<"CHOLERA : 2"<<endl;
  cout<<"TUBERCULOSIS : 3"<<endl;
  cout<<"Bubonic Plague : 4"<<endl;
  label:
  cout<<"Now, dear "<<player_name<<", which disease would you like?"<<endl;
  int disease_choice;
  string disease_name;
  cin>>disease_choice;
  switch(disease_choice)
   {
        case 1:
            disease_name="Anthrax";
            cout<<"You have chosen Anthrax! Good choice! Let's go dominate the world together, "<<player_name<<"! ";
            break;
        case 2:
            disease_name="Cholera";
            cout<<"You have chosen Cholera! Good choice! Let's go dominate the world together, "<<player_name<<"! ";
            break;
        case 3:
            disease_name="Tuberculosis";
            cout<<"You have chosen Tuberculosis! Good choice! Let's go dominate the world together, "<<player_name<<"! ";
            break;
        case 4:
            disease_name="BubonicPlague";
            cout<<"You have chosen Bubonic Plague! Good choice! Let's go dominate the world together, "<<player_name<<"! ";
            break;
        default:
            cout<<"That does not seem like a valid choice you have entered there, "<<player_name<<"! Try again?";
            goto label;
   }
    sleep(2);
    return 0;
}
