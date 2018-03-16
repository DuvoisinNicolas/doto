#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void getHeroList ();
void readHeroList (const vector<string> & HeroList)
{
  for (unsigned i=0;i<HeroList.size();i++)
  {
      cout << HeroList[i] << "doit être joué avec :" << HeroList[HeroList.size()-i];
  }
}

int main()
{

    readHeroList(HeroList);
    return 0;
}
//ceci est un test
