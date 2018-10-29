//coding for biome spread without colonization, since that requires BMR integration
//starting stuff. not defining class or function; 
//although that would likely decrease the number of lines of code in total, it's more inconvenient to define and recurse in the long run
//all values are arbitrary
//may include continental powerups, but those require integration with rest of program (eg. the revival when BER->0)
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<unistd.h>
#include <algorithm>
using namespace std;
int main()
{
  cout<<"Welcome to the Epidemica global spread simulator!";
  cout<<" Please select a continent from the list below. Each continent comprises 6 biomes representing key geographical features. "<<endl;
  cout<<"1. Europe. A cold, rich continent in the Northern Hemisphere. Challenging to conquer, it has a negative continental effect on account of its high medical output and research. Each time you receive a mutation, your BER shall decrease by 2."<<endl;
  cout<<"2. Africa. A hot, poor continent lying both in the Southern and Northern Hemispheres. Due to its weaknesses and lack of wealth, it is quite easy for diseases to spread there. As a result, there is a 15% chance at the beginning of the game that your initial BCR will be decreased by 1 for the rest of the game as a starting value. Don't forget to bless the rains down in Africa. "<<endl;
  cout<<"3. South America. A tropical continent with a wide range of vegetation, many forgotten things still can persist there, undiscovered. As a result, because of choosing South America, there is a 25% chance that after being eradicated once by humanity, there is a 25% chance you will be revived for 10 more turns."<<endl;
  cout<<"4. North America. A rich, varied continent. On account of its vast swathes of unclaimed terrain and its low population density relative to other parts of the world, its effect is that every time you spread to a new biome on a continent, there is a 5% chance that you will spread to another biome as well."<<endl;
  cout<<"5. Oceania. A continent primarily swallowed by the ocean, the lack of interconnectivity between the discrete land points requires a disease to have a strong resistance to the unforgiving forces of nature's biomes. Hence, there is a 15% chance that all biome weaknesses are neglected for the duration of the game for any disease beginning its journey here."<<endl;
  cout<<"6. Asia. The largest of the continents and also the most geographically diverse, any disease here must be prepared to take on a large number of people and a shocking variety of conditions. So, like a good disease should, there is a chance to bring about future mutations, both good and bad to really test whether you can cut it or not. Hence, for every mutation you receive, there is a 25% chance that you will receive another mutation."<<endl;
  cout<<"Please enter the name of the continent you would like to begin on: ";
  string conti_name;
  cin>>conti_name;
  transform(conti_name.begin(), conti_name.end(), conti_name.begin(), [](char c){
            return tolower(c);});
  cout<<conti_name<<" has been selected.";}
