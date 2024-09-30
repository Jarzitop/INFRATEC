#include <stdio.h>

double calcular_tasa_bruta(int datos, double tiempo) {
    return datos / tiempo;
}

double calcular_tasa_efectiva(int datos, int datos_control, double tiempo) {
    return (datos - datos_control) / tiempo;
}

int main() {
    int datos, datos_control;
    double tiempo;

    printf("Ingrese la cantidad de datos transmitidos (en bits): ");
    scanf("%d", &datos);

    printf("Ingrese la cantidad de datos de control transmitidos (en bits): ");
    scanf("%d", &datos_control);

    printf("Ingrese el tiempo de transmisión (en segundos): ");
    scanf("%lf", &tiempo);

    double tasa_bruta = calcular_tasa_bruta(datos, tiempo);
    printf("Tasa de transferencia bruta: %.2f bps\n", tasa_bruta);

    double tasa_efectiva = calcular_tasa_efectiva(datos, datos_control, tiempo);
    printf("Tasa de transferencia efectiva: %.2f bps\n", tasa_efectiva);

    return 0;
}
