#include <stdio.h>
#include <math.h>

#define PI_CONST 3.14159265358979323846
#define TAXA_SENSOR_HZ 100.0     
#define TOTAL_PUNTOS 64         

int main() {
    double sinal_tempo[TOTAL_PUNTOS];
    double componente_real, componente_imaginaria;
    double amplitude_frequencia;

    for (int t = 0; t < TOTAL_PUNTOS; t++) {
        double tempo = (double)t / TAXA_SENSOR_HZ;
        sinal_tempo[t] = sin(2.0 * PI_CONST * 20.0 * tempo); 
    }

    printf("Frequencia_Hz,Intensidade\n");

    for (int k = 0; k < TOTAL_PUNTOS / 2; k++) {
        componente_real = 0.0;
        componente_imaginaria = 0.0;

        for (int n = 0; n < TOTAL_PUNTOS; n++) {
            double angulo = (2.0 * PI_CONST * k * n) / TOTAL_PUNTOS;
            componente_real += sinal_tempo[n] * cos(angulo);
            componente_imaginaria -= sinal_tempo[n] * sin(angulo);
        }

        amplitude_frequencia = sqrt(componente_real * componente_real + componente_imaginaria * componente_imaginaria) / TOTAL_PUNTOS;
        double frequencia_hz = (k * TAXA_SENSOR_HZ) / TOTAL_PUNTOS;

        printf("%.2f,%.4f\n", frequencia_hz, amplitude_frequencia);
    }

    return 0;
}
