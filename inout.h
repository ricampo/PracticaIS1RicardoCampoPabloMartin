#pragma once
#include <iostream>
#include <iomanip>
#include <string>

struct tDatos {
    double num1;
    double num2;
    std::string operador;
};

// Funciones del módulo INOUT
tDatos lectura();
void mostrarSolucion(double sol);
void mostrarError(const std::string& error);
void mensajeInicio();
void help();
double getNum1(const tDatos& datos);
double getNum2(const tDatos& datos);
std::string getOperator(const tDatos& datos);
