#include <iostream>
#include <conio.h>
void pedirDatos();
void cambio(int, int&, int&, int&, int&, int&, int&);

int dolares;
int cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;

int main(){
    pedirDatos();
    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
    std::cout << "\n100$ = " << cien;
    std::cout << "\n50$ = " << cincuenta;
    std::cout << "\n20$ = " << veinte;
    std::cout << "\n10$ = " << diez;
    std::cout << "\n5$ = " << cinco;
    std::cout << "\n1$ = " << uno;
    getch();
    return 0;
}

void pedirDatos(){
    std::cout << "Convertidor de $ a billetes americanos.";
    std::cout << "\nIntroduce un numero de dolares: ";
    std::cin >> dolares;
}

void cambio(int dol, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien=dol/100; dol%=100;
    cincuenta=dol/50; dol%=50;
    veinte=dol/20; dol%=20;
    diez=dol/10; dol%=10;
    cinco=dol/5; dol%=5;
    uno=dol;
}

