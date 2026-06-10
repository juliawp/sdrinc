# sdrinc

# Processamento de Sinais em C - Telemetria de Alta Performance

Este projeto replica os conceitos fundamentais de Processamento Digital de Sinais (DSP) utilizando a linguagem C, inspirado nos princípios do PySDR, mas aplicado ao contexto de telemetria automotiva.

## Capítulo 1: Amostragem de Dados do Motor (Domínio do Tempo)

No mundo físico, as vibrações de um motor de corrida são contínuas. Para que o computador de bordo consiga processar esses dados, precisamos transformar essa informação contínua em dados discretos (números isolados). Esse processo é chamado de **Amostragem**.

### Conceitos Chave:
* **Taxa de Amostragem (TAXA_SENSOR_HZ):** A frequência com que o sensor faz uma leitura por segundo. Neste exemplo, usamos 500 Hz (500 leituras por segundo).
* **Frequência do Sinal (VIBRACAO_MOTOR_HZ):** A velocidade real da oscilação que estamos medindo (25 Hz).

O código `telemetria.c` gera uma simulação matemática perfeita dessa captura de dados salvando os resultados em formato estruturado.
