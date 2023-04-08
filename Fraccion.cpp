#include "Fraccion.h"
#include <iostream>
#include <string>
using namespace std;

Fraccion::Fraccion(){
    numerador = 0;
    denominador = 1;
}

Fraccion::Fraccion(int num, int denom){
    if (num<0 || denom<=0){
        string mensaje;
        mensaje = "Error en tu fraccion";
        if (num < 0){
            mensaje = mensaje + "\nTu numerador: "+to_string(num)+ " es inválido debido a que es negativo";
        } 
        if (denom <= 0 ){
            mensaje = mensaje + "\nTu denominador: "+to_string(denom) +" es inválido debido a que es igual o menor a 0";
        }
        throw(mensaje);
    }
    int x = 1;
        while (x>0){
            x = 0;
            for(int y = 2; y < 9; y++){
                if(num % y == 0 && denom % y == 0){
                    num = num/y;
                    denom = denom/y;
                    x++;
                }
            }
        }
numerador = num;
denominador = denom;
}

int Fraccion::getNumerador(){
    return numerador;
}

int Fraccion::getDenominador(){
    return denominador;
}

Fraccion Fraccion::operator+(Fraccion &f){
    int denom1 = denominador * f.getDenominador();
    int num1 = (numerador*f.getDenominador()) + (denominador * f.getNumerador());
    Fraccion f1(num1, denom1);
    return f1; 
}
Fraccion Fraccion::operator-(Fraccion &f){
    int denom1 = denominador * f.getDenominador();
    int num1 = (numerador*f.getDenominador()) - (denominador * f.getNumerador());
    Fraccion f1(num1, denom1);
    return f1; 
}
Fraccion Fraccion::operator*(Fraccion &f){
    int denom1 = denominador * f.getDenominador();
    int num1 = numerador * f.getNumerador();
    Fraccion f1(num1, denom1);
    return f1; 
}
Fraccion Fraccion::operator/(Fraccion &f){
    int denom1 = denominador * f.getNumerador();
    int num1 = numerador*f.getDenominador();
    Fraccion f1(num1, denom1);
    return f1; 
}
bool Fraccion::operator<(Fraccion &f){
    float valor1 = (float)numerador/(float)denominador;
    float valor2 = (float)f.getNumerador() / (float)f.getDenominador();
    if (valor1 < valor2){
        cout<<"La primer fraccion SI es menor que la segunda"<<endl;
    }else{
        cout<<"La primer fraccion NO es menor que la segunda"<<endl;
    }
    return (valor1 < valor2);
}
bool Fraccion::operator>(Fraccion &f){
    double valor1 = (float)numerador/(float)denominador;
    double valor2 = (float)f.getNumerador() / (float)f.getDenominador();
    if (valor1 > valor2){
        cout<<"La primer fraccion SI es mayor que la segunda"<<endl;
    }else{
        cout<<"La primer fraccion NO es mayor que la segunda"<<endl;
    }
    return (valor1 > valor2);
}
bool Fraccion::operator==(Fraccion &f){
    float valor1 = (float)numerador/(float)denominador;
    float valor2 = (float)f.getNumerador() / (float)f.getDenominador();
    if (valor1 == valor2){
        cout<<"Las fracciones SI son iguales"<<endl;
    }else{
        cout<<"Las fracciones NO son iguales"<<endl;
    }
    return (valor1 == valor2);
}
void Fraccion::imprimir(){
    cout <<numerador<<" / "<<denominador<<endl;
}
void Fraccion::imprimir_param(int vacios){
    string vacio = " ";
    for (int i = 0; i < vacios; i ++){
        cout<< " ";
    } 
    cout << numerador << "/";
    for (int a = 0; a < vacios; a ++){
        cout<< " ";
    }
    cout << denominador << endl;
}
void Fraccion::imprimir_flotante(){
    float flotante = (float)numerador/(float)denominador;
    cout <<flotante<<endl;
}
