#include <iostream>
#include <time.h>

using namespace std;

int main (int argc, char const *argv[])
{
    srand(time(0));
    int lost = rand();
    // cout << lost;

    cout << "podaj rozmiar tablicy";

    int rozmiar;
    cin >> rozmiar;
    int tablica[rozmiar]; // int *tablica = new int[rozmiar]
    for (int i=0 ; i< rozmiar ;i++)
        tablica[i]=(rand()%10)+1;

    for (int i = 0; i <rozmiar; i++)
        cout << tablica [i] << " ";

cout << "\n---------------------------------------------------" << endl;
    
    for ( int i = 0; i < rozmiar/2 ; i++ )
        {int tmp = tablica[i];
        tablica[i] = tablica [rozmiar-i-1];
        tablica[rozmiar-i-1] = tmp;


        }
    for (int i = 0; i <rozmiar; i++)
        cout << tablica [i] << " ";

    // usuwanie elementów w środku tablicy
    int s=0;
    if ( rozmiar%2==0)
        s = (rozmiar-1)/2;
    else
        s = rozmiar/2;
    
    for (;s<rozmiar;s++){
        tablica[s] = tablica[s+1];

    }
cout << "\n---------------------------------------------------" << endl;
    for (int i = 0; i <rozmiar; i++)
        cout << tablica [i] << " ";

       
    int lotto[49];
    for (int i = 0;i < 49;i++)
        lotto[i]=i+1;
    
    int liczb = 49;

    for(int l = 1;l<=6;l++ ){
        int los = rand()%liczb;
        cout << lotto[los] << " ";
        for ( ;los < liczb;los++)
            lotto[los]=lotto[los+1];
        liczb--;
    }


    
    // tablica w zymiarem podanym, sprawdzic czy jest ta m liczba 5, czy jest tam jakas liczba podzielna przez 12, 
    
    
    return 0;
}    
