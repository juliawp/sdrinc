# Capítulo 2: Diagnóstico de Falhas (Domínio da Frequência)

Se o motor do carro estiver vibrando de forma estranha, olhar apenas o gráfico no tempo não ajuda a descobrir a causa. Precisamos descobrir **quais frequências** específicas estão gerando essa energia. 

Para isso, transformamos os dados do Domínio do Tempo para o **Domínio da Frequência** utilizando o algoritmo de Transformada Discreta de Fourier (DFT).

### O que o código faz:
1. Ele pega as 64 amostras da vibração coletadas pelo sensor.
2. Ele decompõe esse sinal, testando frequência por frequência.
3. O resultado impresso mostra exatamente em qual frequência (Hz) o motor tem maior pico de vibração.

O código correspondente a este capítulo está no arquivo `analise_frequencia.c`.
