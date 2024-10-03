#include <bits/stdc++.h>

using namespace std;

int main() {
    /*

    zmienne typu char przechowują znaki w postaci kodów ascii (https://pl.wikipedia.org/wiki/ASCII)
    czyli 'a' to będzie 97, 'b' to będzie 98 itp

    */

    char znak = 'a';

    cout << znak << endl; // wypisze: a

    int kod_ascii = znak;

    cout << kod_ascii << endl; // wypisze: 97

    /*
    
    zmienne typu string (ang. łańcuch, chodzi tu o łańcuch znaków) przechowują napisy

    są to tak naprawdę tablice charów i tak możemy się do nich odwoływać

    */

    string napis = "czerwony kapturek";

    cout << napis << endl; // wypisze: czerwony kapturek

    // metoda length() zwraca długość napisu (spacje też się liczą!)
    cout << napis.length() << endl; // wypisze: 17

    // możemy odwoływać się do napisu jak do tablicy
    cout << napis[0] << endl; // bierzemy znak o indeksie 0 z naszego napisu, wypisze: c

    for (int i=0; i<napis.length(); i++) {
        cout << napis[i] << " ";
    }
    cout << endl;
    
    // wypisze: c z e r w o n y   k a p t u r e k 

    /*
    
    UWAGA!
    stringi zapisujemy używając " "
    chary zapisujemy używając ' ' 
    
    */

    string slowo = "przykladowy string";

    char litera = 'z';
}