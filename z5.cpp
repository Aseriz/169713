#include <iostream>
#include <stdlib.h>
using namespace std;

float pobierzF();
float pobierzC();
float pobierzK();

void czekajNaEnter() {
    cout << "Wcisnij ENTER aby kontynuowac...";
    cin.ignore();
    cin.get();
}

float check(float temp, char stopnie);

float pobierzF() {
    float F;
    cout << "Podaj F: ";
    cin >> F;
    return F;
}

float pobierzC() {
    float C;
    cout << "Podaj C: ";
    cin >> C;
    return C;
}

float pobierzK() {
    float K;
    cout << "Podaj K: ";
    cin >> K;
    return K;
}

float FtoC(float F) {
    float C = (F - 32.0) * 5.0/9.0;
    return C;
}

float FtoK (float F) {
    float K = (F +  459.67) * 5.0/9.0;
    return K;
}

float CtoF (float C) {
    float F = C * 9.0/5.0 + 32.0;
    return F;
}

float CtoK (float C) {
    float K = C + 273.15;
    return K;
}

float KtoC (float K) {
    float C = K - 273.15;
    return C;
}

float KtoF (float K) {
    float F = K * 9.0/5.0 - 459.67;
    return F;
}

void menu();

void menu(){
cout << "1 -  przelicz Fahr -> Celsius\n";
cout << "2 - przelicz Fahr -> Kelwin\n";
cout << "3 - przelicz Celsius -> Fahr\n";
cout << "4 - przelicz Celsius -> Kelwin\n";
cout << "5 - przelicz Kelwin -> Celsius\n";
cout << "6 - przelicz Kelwin -> Fahr\n";
cout << "7 - zakończ działanie programu\n";
}

float check(float temp, char stopnie) { 
if (stopnie == 'K' && temp < 0)
        return -999.0;

    if (stopnie == 'C' && temp < -273.15)
        return -999.0;

    if (stopnie == 'F' && temp < -459.67)
        return -999.0;

    return temp;
}

int main(){

    float wynik;
    float F, C, K;
    int wybor;
    
    while (true){
        system("cls");
        cout << "\n";
        cout << "Wybierz opcje 1-7: \n\n";
        menu();
        cin >> wybor;

        float t;
    
    switch (wybor) {
        case 1:
        t = pobierzF();
    if (check(t, 'F') == -999.0){
        cout << "Temperatura poza zakresem\n";
    } else {
        wynik = FtoC(t);
        cout << "1 - Fahr -> Celsius\n";
        cout << "Dla F = " << t << " Wynik: " << wynik << endl;
    }
    czekajNaEnter();
    break;

        case 2:
        t = pobierzF();
    if (check(t, 'F') == -999.0){
        cout << "Temperatura poza zakresem\n";
    } else {
        wynik = FtoK(t);
        cout << "2 - Fahr -> Kelwin\n";
        cout << "Dla F = " << t << " Wynik: " << wynik << endl;
    }
    czekajNaEnter();
    break;

        case 3:
        t = pobierzC();
    if (check(t, 'C') == -999.0) {
        cout << "Temperatura poza zakresem\n";
    } else {
        wynik = CtoF(t);
        cout << "3 - Celsius -> Fahr\n";
        cout << "Dla C = " << t << " Wynik: " << wynik << endl;
    }
    czekajNaEnter();
    break;

        case 4:
        t = pobierzC();
    if (check(t, 'C') == -999.0) {
        cout << "Temperatura poza zakresem\n";
    } else {
        wynik = CtoK(t);
        cout << "4 - Celsius -> Kelwin\n";
        cout << "Dla C = " << t << " Wynik: " << wynik << endl;
    }
    czekajNaEnter();
    break;

        case 5:
        t = pobierzK();
    if (check(t, 'K') == -999.0) {
        cout << "Temperatura poza zakresem\n";
    } else {
        wynik = KtoC(t);
        cout << "5 - Kelwin -> Celsius\n";
        cout << "Dla K = " << t << " Wynik: " << wynik << endl;
    }
    czekajNaEnter();
    break;

        case 6:
         t = pobierzK();
    if (check(t, 'K') == -999.0) {
        cout << "Temperatura poza zakresem\n";
    } else {
        wynik = KtoF(t);
        cout << "6 - Kelwin -> Fahr\n";
        cout << "Dla K = " << t << " Wynik: " << wynik << endl;
    }
    czekajNaEnter();
    break;

        case 7:
        return 0;

        default:
        cout << "Nieznana opcja\n" << endl;
        cin.ignore();
            czekajNaEnter();
    }

}
return 0;
}
