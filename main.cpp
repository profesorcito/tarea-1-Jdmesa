#include <iostream>

using namespace std;

// TODO: Implementar función para calcular la suma de los dígitos de un número
int sumaDigitos(int n) {

}

// TODO: Implementar la lógica para calcular la tarifa
double calcularTarifa(int horas, int dia) {
    const double tarifa_primer_hora = 6.00;
    const double tarifa_1_a_3 = 4.00;
    const double tarifa_3_a_5 = 3.00;
    const double tarifa_FIJA = 22.00;
    const int limite_HORAS = 24;
    const double incremento_FIN_SEMANA = 1.15;
    const double descuento_DIGITOS = 0.95;

    // Validar límite de horas
    if (horas > limite_HORAS) {
        return -1;
    }

    double totalPagar = 0.0;

    // TODO: Implementar la lógica para calcular la tarifa base
    if (horas == 1) {
        horas * tarifa_primer_hora;
    } else if (horas > 1 && horas <= 3) {
        horas * tarifa_1_a_3;
    } else if (horas > 3 && horas <= 5) {
        horas * tarifa_3_a_5;
    } else {
        horas * tarifa_FIJA;
    }

    // TODO: Aplicar incremento si es fin de semana
    if (dia == 6 || dia == 7) {
        totalPagar *= incremento_FIN_SEMANA;
    }

    // TODO: Aplicar descuento si la suma de los dígitos es múltiplo de 3
    if (/* Completa esta condición */1) {
        totalPagar *= descuento_DIGITOS;
    }

    return totalPagar;
}

int main() {
    int horas, dia;

    // Leer los valores de entrada
    cin >> horas >> dia;

    //double resultado = calcularTarifa(horas, dia);
    double resultado = 10.00;
    if (resultado == -1) {
        cout << "ERROR" << endl;
    } else {
        printf("%.2f\n", resultado);
    }

    return 0;
}