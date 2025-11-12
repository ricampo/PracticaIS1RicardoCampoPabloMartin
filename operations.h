#pragma once
#include <cmath>
#include "INOUT.h"

// Funciones del módulo OPERATIONS
double add(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double divide(double num1, double num2, bool& ok);
double exponent(double num1, double num2);
double execute(const tDatos& datos, bool& ok);
