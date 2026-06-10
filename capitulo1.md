# Capítulo 1: Amostragem de Dados do Motor (Domínio do Tempo)

No mundo físico, as vibrações de um motor de corrida são contínuas. Para que o computador de bordo consiga processar esses dados, precisamos transformar essa informação contínua em dados discretos (números isolados). Esse processo é chamado de **Amostragem**.

### Conceitos Chave:
* **Taxa de Amostragem (TAXA_SENSOR_HZ):** A frequência com que o sensor faz uma leitura por segundo. Neste exemplo, usamos 500 Hz (500 leituras por segundo).
* **Frequência do Sinal (VIBRACAO_MOTOR_HZ):** A velocidade real da oscilação que estamos medindo (25 Hz).

O código correspondente a este capítulo está no arquivo `telemetria.c`.
