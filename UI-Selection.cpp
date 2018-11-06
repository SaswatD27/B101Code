#include<iostream>
#include<cstring>
#include<unistd.h>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
  cout<<"Welcome to Epidemica, the disease spread simulator!"<<endl;
  cout <<"In this game/simulator, you play the role of a deadly disease whose only goal is to spread across the world!"<<endl;
  cout <<
    "Before we jump into it, let's begin more conventionally. What is your name, dear player?"
    << endl;
  string player_name;
    cin >> player_name;
    cout << "Well, welcome, " << player_name <<
    "! In a short while, we will be a deadly disease and we will be infecting our first human!"
    << endl;
    cout <<
    "What's your goal in this virulent party? Are you inspired by Thanos to slay humanity?"
    << endl;
    cout <<
    "Or are you a purist disease seeking to cleanse planet Earth of its most widespread disease- filthy humans?"
    << endl;
    cout <<
    "Ah, but is your real motive simply the base desire of making yourself survive the longest you can?"
    << endl;
    cout <<
    "Whatever your motives to seek revenge might be, do know that humanity will not be an easy foe; they will fight back, and hard!"
    << endl;
    cout << "Now, my beloved plague-mongerer " << player_name <<
    ", it's time to select your disease." << endl;
    cout <<
    "Here are your choices of disease, some of the most virulent things to hit humanity, both in the past, the present and possibly in the future: "
    << endl;
    cout << "Drumroll: " << endl;
  for (int i = 0; i < 10; i++)
    {
    cout << ". "<<endl;
        sleep(1);
    }
  cout <<
    "1. Anthrax. A disease caused by Bacillus anthracis, Anthrax have spores that can live for a long, long time."
    << endl;
    cout<<"Its symptoms include high fever, fatigue, flu-like symptoms, shock, and in later stages, meningitis. "<<endl;
  cout << "A recent proliferation in biowarfare in the future has caused inhalatory anthrax, the most dangerous form, to be a serious threat."<<endl;
cout<<"Anthrax is strong in Coasts, Mountains, and Plains Biomes, but is weak in Forests and Desert-Plateau-Mesa Biomes."<<endl;
cout<<"Enter 1 to choose Anthrax! "<<endl;
cout<<"2. Cholera. A disease caused by the bacterium Vibrio cholerae, Cholera is spread through contaminated water."<<endl;
cout<<"The pollution of drinking water sources has led to cholera being a highly virulent disease."<<endl;
cout<<"Its symptoms include diarrhoea, dehydration, vomiting and cramps."<<endl;
cout<<"Cholera is strong in Desert-Plateau-Mesa, Coasts, and Island Biomes, but is weak in Mountain biomes."<<endl;
cout<<"Enter 2 to choose cholera!"<<endl;
cout<<"3. Tuberculosis. Caused by the bacterium Mycobacterium tuberculosis, tuberculosis, also called consumption, phthisis or just TB, is a deadly disease spread via air."<<endl;
cout<<"In the future, increasing population may present a problem in maintaining people at a safe distance away from each other enough to prevent TB's spread, although the disease is generally latent."<<endl;
cout<<"Tuberculosis is strong in Mountains, Forests, and Island biomes, but is weak in Plains biomes."<<endl;
cout<<"Enter 3 to choose tuberculosis!"<<endl;
cout<<"4. Bubonic Plague. Caused by the bacterium Yersinia pestis, the proliferation of rats in urban areas, and their fleas has brought about a rise of bubonic plague cases."<<endl;
cout<<"Once in the 1350s in Europe, the Black Death caused the death of 50 percent of the continent's population. "<<endl;
cout<<"Its symptoms include buboes (lymphnode swellings), flu-like symptoms, chills, headaches, and fatigue."<<endl;
cout<<"Bubonic Plague is strong in Plains, Forests and Desert-Plateau-Mesa biomes, but is weak in Coasts and Island biomes."<<endl;
cout<<"Enter 4 to choose bubonic plague!"<<endl;
sleep(2);
label:
cout<<"Now, dear "<<player_name<<", which disease would you like?";
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
