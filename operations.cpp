#include "OPERATIONS.h"

double add(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double mul(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2, bool& ok) {
    double resultado = 0.0;
    ok = true;

    if (num2 == 0.0) {
        mostrarError("No se puede dividir por cero");
        ok = false;
    }
    else {
        resultado = num1 / num2;
    }

    return resultado;
}

double exponent(double num1, double num2) {
    return std::pow(num1, num2);
}

double execute(const tDatos& datos, bool& ok) {
    ok = true;
    double resultado = 0.0;

    const std::string operador = getOperator(datos);
    const double n1 = getNum1(datos);
    const double n2 = getNum2(datos);

    if (operador == "Add") {
        resultado = add(n1, n2);
    }
    else if (operador == "Sub") {
        resultado = sub(n1, n2);
    }
    else if (operador == "Mul") {
        resultado = mul(n1, n2);
    }
    else if (operador == "Div") {
        resultado = divide(n1, n2, ok);
    }
    else if (operador == "Exp") {
        resultado = exponent(n1, n2);
    }
    else {
        mostrarError("Operador no valido. Usa Help para ver las opciones.");
        ok = false;
    }

    return resultado;
}
