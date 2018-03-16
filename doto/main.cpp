#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> getHeroList (const string & pathToList){

    ifstream laListeDesHeros (pathToList);
    vector<string> laListe;
    unsigned cpt (0);
    if (laListeDesHeros.fail()){
        cerr << "desole le fichier n'a pas pu etre ouvert !" << endl;
    }
    else {
        while (true){
            getline (laListeDesHeros, laListe[cpt]);
            if (laListeDesHeros.eof()) break;
            ++cpt;
        }
    }
    return laListe;
}
void readHeroList (const vector<string> & HeroList)
{
  for (unsigned i=0;i<HeroList.size();i++)
  {
      cout << HeroList[i] << "doit être joué avec :" << HeroList[HeroList.size()-i];
  }
}

int main()
{
    const string path ("../doto.txt");
    vector<string> HeroList = getHeroList(path);
    readHeroList(HeroList);
    return 0;
}
