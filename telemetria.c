#include <stdio.h>
#include <math.h>

#define PI_CONST 3.14159265358979323846
#define TAXA_SENSOR_HZ 500.0     
#define VIBRACAO_MOTOR_HZ 25.0   
#define TOTAL_LEITURAS 100       

int main() {
    double instante_tempo;
    double amplitude_vibracao;

    printf("Indice,Tempo_Segundos,Intensidade_Vibracao\n");
    
    for (int passo = 0; passo < TOTAL_LEITURAS; passo++) {
        instante_tempo = passo / TAXA_SENSOR_HZ;
        amplitude_vibracao = sin(2.0 * PI_CONST * VIBRACAO_MOTOR_HZ * instante_tempo);
        printf("%d,%.4f,%.4f\n", passo, instante_tempo, amplitude_vibracao);
    }

    return 0;
}
