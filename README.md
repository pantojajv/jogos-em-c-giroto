# jogos-em-c-giroto



Arcade de Jogos em C

Este projeto consiste em um sistema de console desenvolvido em C que agrupa três jogos interativos em um único menu principal. 

O código foi estruturado para exercitar conceitos fundamentais de programação, como estruturas de repetição, condicionais, manipulação de strings e tratamento de entrada de dados para evitar erros de execução.

 Jogos Incluídos

1. Pergunta e Resposta (Quiz): Um jogo de múltipla escolha com perguntas sobre conhecimentos gerais, cultura pop e fundamentos de computação.
2. Cobra na Caixa: Um jogo de sorte para dois jogadores com escolha de personagens e mecânica de eliminação baseada em sorteios aleatórios.
3. Gousmas War: Um jogo de estratégia de combate por turnos entre dois jogadores, envolvendo mecânicas de ataque e divisão de pontos.

 Aspectos Técnicos

O software utiliza as bibliotecas padrão stdio.h, stdlib.h, time.h e string.h. Foram aplicadas proteções no fluxo de leitura (scanf) para garantir que o programa não entre em loop infinito caso o usuário digite caracteres inválidos nos campos numéricos.

 Autores

Projeto desenvolvido por:
Ronaldo Cutrim e Joao Vitor Pantoja

 Como Executar

Para rodar o projeto, utilize um compilador de C (como o GCC):

1. Compile o código:
gcc arcade.c -o arcade

2. Execute o arquivo gerado:
./arcade

Observações Técnicas
O desenvolvimento contou com o auxílio de inteligência artificial para a implementação de mecanismos de controle, como o uso de loops while para a limpeza do buffer de teclado, evitando travamentos e loops infinitos.

A estrutura principal do menu e as repetições dos jogos foram construídas utilizando a instrução do-while. Além disso, a lógica e a verificação de bugs foram validadas com suporte de IA para garantir a estabilidade do código e a correta manipulação da biblioteca string.h.
