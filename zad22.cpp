#include <iostream>
using namespace std;

int tab[10];
int rozmiar = 10;

void usun() {
    int pozycja;
    cout << "Podaj pozycju [0,9] do usunienia "<< endl;
    cin >> pozycja;

    if (pozycja < 0  || pozycja >= rozmiar){
        cout << "Nieprawidlowa wartosc "<< endl;
        return;
    }

    for (int i = pozycja; i < rozmiar - 1; i++)
    tab[i] = tab[i + 1];

    cout << "Pozycja usunieta"  << endl;

}
    

int main(){

    

    return 0;
}