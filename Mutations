#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<unistd.h>
using namespace std;
int main ()
{
  int lowestRate = 3;
  int mutaratemp;
  int BER = 50;
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
      sleep (2.5);
    }
  mutanum = rand () % ((mutalast - mutafirst) + 1) + mutafirst;
  if (mutarate == 0)
    cout << "You have received a new mutation! It is mutation number " <<
      mutanum << ". "<<endl;
  switch (mutanum)
    {
    case 1:
      mutaname = "Favoured spread";
      cout << "It is the mutation of " << mutaname <<
	". Its effect is that the country colonization rate decreases by 1. "<<endl;
      spreadrate = 4;
      break;
    case 2:
      mutaname = "Impeded spread";
      cout << "It is the mutation of " << mutaname <<
	". Its effect is that the country colonization rate increases by 1. "<<endl;
      spreadrate = 6;
      break;
    case 3:
      mutaname = "Strain Evolution";
      cout << "It is the mutation of " << mutaname <<
	". Its effect is that the the number of turns left before Eradication increases between 5 and 15."<<endl;;
      BER_rise = rand () % ((BER_rise_max - BER_rise_min) + 1) + BER_rise_min;
      BER = BER + BER_rise;
      cout << "The new rate of eradication is: " << BER << ". "<<endl;
      break;
    case 4:
      mutaname = "Strain Extinction";
      cout << "It is the mutation of " << mutaname <<
	". Its effect is that the number of turns left before eradication decreases by a number between 1 and 5."<<endl;
      BER_fall = rand () % ((5 - 1) + 1) + 1;
      BER = BER - BER_fall;
      cout << "The new rate of eradication is: " << BER << ". "<<endl;
      break;
    case 5:
      mutaname = "Severe Symptoms";
      cout << "It is the mutation of " << mutaname <<
	". Its effect is that the number of turns left before mutation decreases by 1 on either side."<<endl;
      highestRate = highestRate - 1;
      lowestRate = lowestRate - 1;
      break;
    case 6:
      mutaname = "Weakening Symptoms";
      cout << "It is the mutation of " << mutaname <<
	". Its effect is that the number of turns left before mutation increases by 1 on either end."<<endl;
      highestRate = highestRate + 1;
      lowestRate = lowestRate + 1;
      break;
    case 7:
      mutaname = "Antibiotic Resistance";
      cout << "It is the mutation of " << mutaname <<". Its effect is that the BER increases by 10 percent each ";
	  cout<<"time you receive a mutation, but Mutation Number 3, Strain Evolution, will increase BER only from 2 to 12. "<<endl;
	  BER_rise_min=2;
	  BER_rise_max=12;
	  BER=1.1*BER;
	  cout<<"You now have "<<BER<<" turns left before eradication."<<endl;
	  break;
	case 8:
	  mutaname = "Medical R&D";
      cout << "It is the mutation of " << mutaname <<". Its effect is that the BER decreases by 10 percent each ";
	  cout<<"time you receive a mutation, but Mutation Number 3, Strain Evolution, will increase BER only from 7 to 17. "<<endl;
	  BER_rise_min=7;
	  BER_rise_max=17;
	  BER=0.9*BER;
	  cout<<"You now have "<<BER<<" turns left before eradication."<<endl;
	  break;
	case 9:
	    mutaname="Colonization!";
	    cout<<"It is the mutation of "<<mutaname<<" Its effect is that you spread to a new continent, where you get a random biome."<<endl;
	   break;
	default:
	    cout<<"Oops, sorry! You did not receive a mutation this time. Maybe you will evolve next time! "<<endl;
    }
    cout << " Rate of country colonization is now " << spreadrate << ". "<<endl;
BER--;
cout<<"You have "<<BER<<" turns before eradication."<<endl;
sleep(2);
}
  return 0;
}
