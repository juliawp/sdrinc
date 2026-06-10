# Processamento de Sinais em C - Telemetria de Alta Performance

Este projeto replica os conceitos fundamentais de Processamento Digital de Sinais (DSP) utilizando a linguagem C, inspirado nos princípios do PySDR, mas aplicado ao contexto de telemetria automotiva.

## Capítulo 1: Amostragem de Dados do Motor (Domínio do Tempo)

No mundo físico, as vibrações de um motor de corrida são contínuas. Para que o computador de bordo consiga processar esses dados, precisamos transformar essa informação contínua em dados discretos (números isolados). Esse processo é chamado de **Amostragem**.

### Conceitos Chave:
* **Taxa de Amostragem (TAXA_SENSOR_HZ):** A frequência com que o sensor faz uma leitura por segundo. Neste exemplo, usamos 500 Hz (500 leituras por segundo).
* **Frequência do Sinal (VIBRACAO_MOTOR_HZ):** A velocidade real da oscilação que estamos medindo (25 Hz).

O código `telemetria.c` gera uma simulação matemática perfeita dessa captura de dados salvando os resultados em formato estruturado.



## Capítulo 2: Diagnóstico de Falhas (Domínio da Frecuencia)

Se o motor do carro estiver vibrando de forma estranha, olhar apenas o gráfico no tempo não ajuda a descobrir a causa. Precisamos descobrir **quais frequências** específicas estão gerando essa energia. 

Para isso, transformamos os dados do Domínio do Tempo para o **Domínio da Frequência** utilizando o algoritmo de Transformada Discreta de Fourier (DFT).

### O que o código `analise_frequencia.c` faz:
1. Ele pega as 64 amostras da vibração coletadas pelo sensor.
2. Ele decompõe esse sinal, testando frequência por frequência.
3. O resultado impresso mostra exatamente em qual frequência (Hz) o motor tem maior pico de vibração, permitindo isolar o componente mecânico defeituoso.



