#include <iostream>
#include "INOUT.h"
#include "OPERATIONS.h"

int main() {
    bool continuar = true;
    mensajeInicio();

    while (continuar) {
        tDatos datos = lectura();
        std::string operador = getOperator(datos);

        if (operador == "Exit") {
            std::cout << "Apagando calculadora..." << std::endl;
            continuar = false;
        }
        else if (operador == "Help") {
            help();
        }
        else {
            bool ok = true;
            double resultado = execute(datos, ok);
            if (ok) {
                mostrarSolucion(resultado);
            }
        }
    }

    return 0;
}
