/*
Author: Jose Angel Garcia Gomez
Date: 02/2021
Description: Program that defines and creates a class called Fraccion that allows you to create fractions and perform operations with them
*/

#ifndef FRACCION_H_
#define FRACCION_H_
using namespace std;

class Fraccion
{
private:
    int numerador, denominador;
public:
    Fraccion();
    Fraccion(int num, int denom);
    Fraccion operator +(Fraccion &f);
    Fraccion operator -(Fraccion &f);
    Fraccion operator *(Fraccion &f);
    Fraccion operator /(Fraccion &f);
    bool operator <(Fraccion &f);
    bool operator >(Fraccion &f);
    bool operator ==(Fraccion &f);
    void imprimir();
    void imprimir_param(int vacios);
    void imprimir_flotante();
    int getNumerador();
    int getDenominador();
};

#endif