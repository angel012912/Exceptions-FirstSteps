/*
Author: Jose Angel Garcia Gomez
Date: 02/2021
Description: Program that use the class called Fraccion in order to use exceptions. 
*/

#include "Fraccion.h"
#include "Fraccion.cpp"
#include<iostream>
#include<string>
using namespace std;

int main(void){
    try
    {
        Fraccion f1(5,0);
        f1.imprimir();
    }
    catch(string &mensaje)
    {
        cout<< mensaje <<endl;
    }
    try
    {
        Fraccion f2(-5,-4);
        f2.imprimir();
    } 
     catch(string &mensaje)
    {
        cout<< mensaje <<endl;
    }
    try
    {
        Fraccion f3(5, -3);
        f3.imprimir();
    }
     catch(string &mensaje)
    {
        cout<< mensaje <<endl;
    }
    try
    {
        Fraccion f4(-5, 4);
        f4.imprimir();
    }
     catch(string &mensaje)
    {
        cout<< mensaje <<endl;
    }
    Fraccion f5;
    try 
    {
        f5 = Fraccion (3, 4);
        f5.imprimir();
    }
     catch(string &mensaje)
    {
        cout<< mensaje <<endl;
    }
    Fraccion f6;
    try 
    {
        f6 = Fraccion (2, 5);
        f6.imprimir();
    }
     catch(string &mensaje)
    {
        cout<< mensaje <<endl;
    }
    try
    {
        Fraccion f7= f6/f5;
        f7.imprimir();
    }
     catch(string &mensaje)
    {
        cout<< mensaje <<endl;
    }
}
