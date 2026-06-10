Capítulo 1: Captura de Telemetria Dinâmica (Amostragem de Sinais)

No mundo real, as coisas acontecem de forma contínua. Para que o computador de bordo de um carro de corrida entenda a oscilação do motor, precisamos tirar "fotos" (amostras) dessa vibração a cada fração de segundo. Isso é o que chamamos de Amostragem (Sampling).
O Código em C (telemetria.c)

Este código simula o sensor do motor gerando uma oscilação constante (uma onda seno) e salva esses dados simulando a captura do sensor.
C

#include <stdio.h>
#include <math.h>

// Definições do Sistema de Telemetria
#define PI_CONST 3.14159265358979323846
#define TAXA_SENSOR_HZ 500.0     // Quantas vezes o sensor lê por segundo (Freq. Amostragem)
#define VIBRACAO_MOTOR_HZ 25.0   // A frequência real da vibração do motor
#define TOTAL_LEITURAS 100       // Quantos dados vamos coletar

int main() {
    double instante_tempo;
    double amplitude_vibracao;

    // Cabeçalho dos dados (formato CSV para fácil leitura posterior)
    printf("Indice,Tempo_Segundos,Intensidade_Vibracao\n");
    
    for (int passo = 0; passo < TOTAL_LEITURAS; passo++) {
        // Calcula o momento exato da leitura
        instante_tempo = passo / TAXA_SENSOR_HZ;
        
        // Simula a oscilação física do motor usando a fórmula: sin(2 * pi * f * t)
        amplitude_vibracao = sin(2.0 * PI_CONST * VIBRACAO_MOTOR_HZ * instante_tempo);
        
        // Exibe os resultados na tela
        printf("%d,%.4f,%.4f\n", passo, instante_tempo, amplitude_vibracao);
    }

    return 0;
}

Como rodar e testar esse código?

Se você salvar esse código em um arquivo chamado telemetria.c, você pode compilá-lo no terminal do seu computador com o comando:
Bash

gcc telemetria.c -o telemetria -lm

(O -lm no final é obrigatório em C para ativar a biblioteca matemática <math.h>).

Para rodar e já salvar o resultado em um arquivo que aceita gráficos (como o Excel ou Gnuplot), você digita:
Bash

./telemetria > dados_motor.csv

Isso vai criar um arquivo chamado dados_motor.csv com todos os pontos gerados!
