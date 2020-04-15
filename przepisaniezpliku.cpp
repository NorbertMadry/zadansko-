#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik1;
    ofstream plik2;

    int tab[1000];
    int x=0;

    plik1.open("liczby.txt");

    if(plik1.good())
        while(!plik1.eof()){
                plik1>>tab[x];
                x++;
        }

    plik1.close();

    plik2.open("dwa.txt");

    for(int i=x; i=0; i--)
        plik2<<tab[i];

    plik2.close();

}
