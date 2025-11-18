#include <iostream>
using namespace std;

int a = 20;
int b = 10;

int suma(){
    return a + b;
}

int main(){

    cout << "Sum of global variables: " << suma() << endl;

    int a = 1;
    int b = 2;

    int suma_lokal = a + b;
    cout << "Sum of local variables: " << suma_lokal << endl;

    return 0;
}