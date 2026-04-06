#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> 

void perguntaserespostas() {
    char resp;
    int acertos = 0;
    int deNovo;

    do {
        acertos = 0;

        // pergunta 1
        printf("\n1. Qual a capital do Para?\n");
        printf(" A) Belem\n");
        printf(" B) Ananindeua\n");
        printf(" C) Castanhal\n");
        printf(" D) Santarem\n");
        printf(" Escolha: ");
        scanf(" %c", &resp);

        if (resp == 'A' || resp == 'a') {
            printf("CORRETO!\n");
            acertos++;
        }
        else {
            printf("ERRADO! A correta era A (Belem).\n");
        }

        // pergunta 2
        printf("\n2. Qual o maior planeta do sistema solar?\n");
        printf(" A) Terra\n");
        printf(" B) Marte\n");
        printf(" C) Jupiter\n");
        printf(" D) Saturno\n");
        printf(" Escolha: ");
        scanf(" %c", &resp);

        if (resp == 'C' || resp == 'c') {
            printf("CORRETO!\n");
            acertos++;
        }
        else {
            printf("ERRADO! A correta era C (Jupiter).\n");
        }

        // pergunta 3
        printf("\n3. Qual o nome do protagonista de Dragon Ball?\n");
        printf(" A) Vegeta\n");
        printf(" B) Kuririn\n");
        printf(" C) Goku\n");
        printf(" D) Gohan\n");
        printf(" Escolha: ");
        scanf(" %c", &resp);

        if (resp == 'C' || resp == 'c') {
            printf("CORRETO!\n");
            acertos++;
        }
        else {
            printf("ERRADO! A correta era C (Goku).\n");
        }

        // pergunta 4
        printf("\n4. Quantos bits existem em 1 Byte?\n");
        printf(" A) 4\n");
        printf(" B) 8\n");
        printf(" C) 16\n");
        printf(" D) 32\n");
        printf(" Escolha: ");
        scanf(" %c", &resp);

        if (resp == 'B' || resp == 'b') {
            printf("CORRETO!\n");
            acertos++;
        }
        else {
            printf("ERRADO! A correta era B (8 bits).\n");
        }

        // pergunta 5
        printf("\n5. Qual a principal linguagem ensinada no 1 bimestre de CC?\n");
        printf(" A) Java\n");
        printf(" B) Python\n");
        printf(" C) PHP\n");
        printf(" D) C\n");
        printf(" Escolha: ");
        scanf(" %c", &resp);

        if (resp == 'D' || resp == 'd') {
            printf("CORRETO!\n");
            acertos++;
        }
        else {
            printf("ERRADO! A correta era D (Linguagem C).\n");
        }

        // mostrando o resultado
        printf("\n--- RESULTADO ---");
        printf("\nVoce acertou %d de 5 perguntas!", acertos);
        
        printf("\n\n1 - Jogar Novamente");
        printf("\n2 - Voltar ao Menu");
        printf("\nEscolha: ");

        // Proteção contra loop infinito se digitar letra
        if (scanf("%d", &deNovo) != 1) {
            while(getchar() != '\n');
        }

    } while (deNovo == 1);
}

void cobraNacaixa() {
    int botao, cobra, escolha, deNovo, n1, n2;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0; 
    int vivo = 1, turno;
    char nome1[30], nome2[30], nomeAtual[30];

    do {
        printf("\n--- PERSONAGENS: ---\n");
        printf(" 1. Saitama\n");
        printf(" 2. Goku\n");
        printf(" 3. Donald Trump\n");
        printf(" 4. Alanzoka\n");
        printf(" 5. Naruto\n");
        printf(" 6. Osama bin Laden\n");
        printf(" 7. Tirulipa\n");
        printf("--------------------\n");
        
        // escolha do jogador 1
        do {
            printf("Jogador 1, escolha o numero (1-7): ");
            if (scanf("%d", &n1) != 1) {
                while(getchar() != '\n');
            }
        } while (n1 < 1 || n1 > 7);

        // escolha do jogador 2
        do {
            printf("Jogador 2, escolha o numero (1-7): ");
            if (scanf("%d", &n2) != 1) {
                while(getchar() != '\n');
            }
            if(n1 == n2) {
                printf("Nao pode repetir o personagem! ");
            }
        } while (n2 < 1 || n2 > 7 || n2 == n1);

        // definindo nome do jogador 1
        if(n1 == 1) strcpy(nome1, "Saitama");
        else if(n1 == 2) strcpy(nome1, "Goku");
        else if(n1 == 3) strcpy(nome1, "Donald Trump");
        else if(n1 == 4) strcpy(nome1, "Alanzoka");
        else if(n1 == 5) strcpy(nome1, "Naruto");
        else if(n1 == 6) strcpy(nome1, "Osama bin Laden");
        else if(n1 == 7) strcpy(nome1, "Tirulipa");

        // definindo nome do jogador 2
        if(n2 == 1) strcpy(nome2, "Saitama");
        else if(n2 == 2) strcpy(nome2, "Goku");
        else if(n2 == 3) strcpy(nome2, "Donald Trump");
        else if(n2 == 4) strcpy(nome2, "Alanzoka");
        else if(n2 == 5) strcpy(nome2, "Naruto");
        else if(n2 == 6) strcpy(nome2, "Osama bin Laden");
        else if(n2 == 7) strcpy(nome2, "Tirulipa");

        // Sorteio do botão e da cobra
        botao = (rand() % 5) + 1;
        do { 
            cobra = (rand() % 5) + 1; 
        } while (cobra == botao);
        
        turno = (rand() % 2) + 1;
        
        if (turno == 1) {
            strcpy(nomeAtual, nome1);
        } else {
            strcpy(nomeAtual, nome2);
        }

        printf("\n--- O JOGO COMECOU! %s inicia! ---\n", nomeAtual);
        
        vivo = 1; 
        c1 = c2 = c3 = c4 = c5 = 0;

        // Loop principal do jogo
        while (vivo == 1) {
            printf("\n%s, escolha uma caixa (1-5): ", nomeAtual);
            
            if (scanf("%d", &escolha) != 1) { 
                while(getchar() != '\n'); 
                continue; 
            }

            if (escolha < 1 || escolha > 5) { 
                printf("Invalido! "); 
                continue; 
            }

            // Vendo se a caixa já foi aberta
            int jaAberta = 0;
            if(escolha == 1 && c1 == 1) jaAberta = 1;
            else if(escolha == 2 && c2 == 1) jaAberta = 1;
            else if(escolha == 3 && c3 == 1) jaAberta = 1;
            else if(escolha == 4 && c4 == 1) jaAberta = 1;
            else if(escolha == 5 && c5 == 1) jaAberta = 1;

            if (jaAberta) { 
                printf("Essa caixa ja esta aberta! "); 
                continue; 
            }

            // identifica a caixa aberta
            if(escolha == 1) c1 = 1; 
            else if(escolha == 2) c2 = 1; 
            else if(escolha == 3) c3 = 1; 
            else if(escolha == 4) c4 = 1; 
            else if(escolha == 5) c5 = 1;

            // Resultado
            if (escolha == botao) {
                printf("VITORIA! %s achou o botao!\n", nomeAtual);
                vivo = 0;
            } 
            else if (escolha == cobra) {
                printf("DERROTA! %s foi pego pela cobra!\n", nomeAtual);
                vivo = 0;
            } 
            else {
                printf("Vazia! ");
                // Troca o turno
                if(turno == 1) { 
                    turno = 2; 
                    strcpy(nomeAtual, nome2); 
                }
                else { 
                    turno = 1; 
                    strcpy(nomeAtual, nome1); 
                }
            }
        }

        printf("\n1 - Jogar Novamente");
        printf("\n2 - Voltar ao Menu");
        printf("\nEscolha: ");
        
        if (scanf("%d", &deNovo) != 1) {
            while(getchar() != '\n');
        }

    } while (deNovo == 1); 
}
  void gousmasWar () {

    char p1 [50], p2 [50];
    int res, g1p1, g2p1, g1p2, g2p2;

    printf ("Bem vindo ao Gousmas War! \nDigite o seu nome, jogador 1: \n");
    scanf ("%s", p1);
    while(getchar() != '\n'); // Limpa buffer após o nome

    printf ("Agora, digite o seu nome, jogador 2 \n");
    scanf ("%s", p2);
    while(getchar() != '\n'); // Limpa buffer após o nome

    printf ("O jogador 1 começa! \n[1] Atacar");
    // PROTEÇÃO ADICIONADA:
    while (scanf ("%d", &res) != 1 || res != 1) {
        printf ("Voce so pode atacar nessa rodada! \n[1] Atacar!");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n');

    g1p1 = 1;
    g2p1 = 1;
    g1p2 = 1;
    g2p2 = 1;

    //PRIMEIRO ATAQUE DO JOGO

    if (res == 1) {

        int resAtac, resGousma;

        printf ("Selecione com qual gousma voce quer atacar \n[1] G1\n[2] G2");
        // PROTEÇÃO ADICIONADA:
        while (scanf ("%d", &resGousma) != 1 || (resGousma != 1 && resGousma != 2)) {
            printf ("Voce deve selecionar somente entre 1 ou 2 \n");
            printf ("Selecione com qual gousma voce quer atacar \n[1] G1\n[2] G2");
            while(getchar() != '\n');
        }
        while(getchar() != '\n');

        while (resGousma == 1 && g1p1 == 0) {
            printf("Essa Gousma esta desintegrada! Escolha outra.\n");
            printf ("Selecione com qual gousma voce quer atacar \n[1] G1\n[2] G2");
            scanf ("%d", &resGousma);
            while(getchar() != '\n');
        }

        while (resGousma == 2 && g2p1 == 0) {
            printf("Essa Gousma esta desintegrada! Escolha outra.\n");
            printf ("Selecione com qual gousma voce quer atacar \n[1] G1\n[2] G2");
            scanf ("%d", &resGousma);
            while(getchar() != '\n');
        }

        if (resGousma == 1 ) {

            printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
            // PROTEÇÃO ADICIONADA:
            while (scanf ("%d", &resAtac) != 1 || (resAtac != 1 && resAtac != 2)) {
                printf ("Voce so pode escolher entre 1 ou 2 \n");
                printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                while(getchar() != '\n');
            }
            while(getchar() != '\n');

            if (resAtac == 1) {
                g1p2 = (g1p2 + g1p1);
                if (g1p2 > 5) g1p2 = 0;
            }

            else if (resAtac == 2) {
                g2p2 = (g2p2 + g1p1);
                if (g2p2 > 5) g2p2 = 0;
            }
        }

        else if (resGousma == 2) {

            printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
            // PROTEÇÃO ADICIONADA:
            while (scanf ("%d", &resAtac) != 1 || (resAtac != 1 && resAtac != 2)) {
                printf ("Voce so pode escolher entre 1 ou 2 \n");
                printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                while(getchar() != '\n');
            }
            while(getchar() != '\n');

            if (resAtac == 1) {
                g1p2 = (g1p2 + g2p1);
                if (g1p2 > 5) g1p2 = 0;
            }

            else if (resAtac == 2) {
                g2p2 = (g2p2 + g2p1);
                if (g2p2 > 5) g2p2 = 0;
            }
        }

        printf ("Tabela \n%s \nG1: %d\nG2: %d\n%s\nG1: %d\nG2: %d \n\n", p1, g1p1, g2p1, p2, g1p2, g2p2);

        while ((g1p1 > 0 || g2p1 > 0) && (g1p2 > 0 || g2p2 > 0)) {



            printf ("Agora é a vez de %s \nDigite [1] para atacar \n[2] para dividir", p2);
            // PROTEÇÃO ADICIONADA (O ponto crucial):
            while (scanf ("%d", &res) != 1 || (res != 1 && res != 2)) {
                printf ("Voce so pode escolher entre 1 e 2 \n");
                printf ("Agora é a vez de %s \nDigite [1] para atacar \n[2] para dividir", p2);
                while(getchar() != '\n');
            }
            while(getchar() != '\n');

            while (g1p2 > 0 && g2p2 > 0 && res == 2) {
                printf ("Voce so pode se dividir se so tiver uma Gousma! \n");
                printf ("Agora é a vez de %s \nDigite [1] para atacar \n[2] para dividir", p2);
                scanf ("%d", &res);
                while(getchar() != '\n');
            }

            if (res == 1 ){
                int newRes;
                printf ("Selecione com qual G voce quer atacar! \n[1] G1 \n[2] G2\n");
                // PROTEÇÃO ADICIONADA:
                while (scanf ("%d", &newRes) != 1 || (newRes != 1 && newRes != 2)) {
                    printf ("Voce deve selecionar somente entre 1 ou 2 \n");
                    printf ("Selecione com qual gousma voce quer atacar \n[1] G1\n[2] G2");
                    while(getchar() != '\n');
                }
                while(getchar() != '\n');

                while ((newRes == 1 && g1p2 == 0) || (newRes == 2 && g2p2 == 0)) {
                    printf("Essa Gousma esta desintegrada! Escolha outra.\n");
                    printf ("Selecione com qual G voce quer atacar! \n[1] G1 \n[2] G2\n");
                    scanf ("%d", &newRes);
                    while(getchar() != '\n');
                }

                if (newRes == 1){
                    int resAtaq;
                    printf ("Selecione qual Gousma voce quer atacar! \n[1] G1\n [2] G2\n");
                    // PROTEÇÃO ADICIONADA:
                    while (scanf ("%d", &resAtaq) != 1 || (resAtaq != 1 && resAtaq != 2)){
                        printf ("Voce so pode escolher entre 1 ou 2 \n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p1);
                        while(getchar() != '\n');
                    }
                    while(getchar() != '\n');

                    while ((resAtaq == 1 && g1p1 == 0) || (resAtaq == 2 && g2p1 == 0)) {
                        printf("Essa Gousma esta desintegrada! Escolha outra.\n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p1);
                        scanf ("%d", &resAtaq);
                        while(getchar() != '\n');
                    }

                    if (resAtaq == 1){
                        g1p1 = (g1p1 + g1p2);
                        if (g1p1 > 5) g1p1 = 0;
                    }
                    else if (resAtaq == 2){
                        g2p1 = (g2p1 + g1p2);
                        if (g2p1 > 5) g2p1 = 0;
                    }
                }
                else if (newRes == 2){
                    int resAtaq;
                    printf ("Selecione qual Gousma voce quer atacar! \n[1] G1\n [2] G2\n");
                    // PROTEÇÃO ADICIONADA:
                    while (scanf ("%d", &resAtaq) != 1 || (resAtaq != 1 && resAtaq != 2)){
                        printf ("Voce so pode escolher entre 1 ou 2 \n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                        while(getchar() != '\n');
                    }
                    while(getchar() != '\n');

                    while ((resAtaq == 1 && g1p1 == 0) || (resAtaq == 2 && g2p1 == 0)) {
                        printf("Essa Gousma esta desintegrada! Escolha outra.\n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                        scanf ("%d", &resAtaq);
                        while(getchar() != '\n');
                    }

                    if (resAtaq == 1){
                        g1p1 = (g1p1 + g2p2);
                        if (g1p1 > 5) g1p1 = 0;
                    }
                    else if (resAtaq == 2){
                        g2p1 = (g2p1 + g2p2);
                        if (g2p1 > 5) g2p1 = 0;
                    }
                }
            }
            else if (res == 2 && g1p2 == 0){
                int temp;
                temp = g2p2;
                g1p2 = (temp/2 + temp%2);
                g2p2 = (temp/2);
            }
            else if (res == 2 && g2p2 == 0){
                int temp;
                temp = g1p2;
                g2p2 = (temp/2 + temp%2);
                g1p2 = (temp/2);
            }
            
            printf ("Tabela \n%s \nG1: %d\nG2: %d\n%s\nG1: %d\nG2: %d \n\n", p1, g1p1, g2p1, p2, g1p2, g2p2);

            printf ("Agora é a vez de %s \nDigite [1] para atacar \n[2] para dividir", p1);
            // PROTEÇÃO ADICIONADA:
            while (scanf ("%d", &res) != 1 || (res != 1 && res != 2)) {
                printf ("Voce so pode escolher entre 1 e 2 \n");
                printf ("Agora é a vez de %s \nDigite [1] para atacar \n[2] para dividir", p1);
                while(getchar() != '\n');
            }
            while(getchar() != '\n');

            while (g1p1 > 0 && g2p1 > 0 && res == 2) {
                printf ("Voce so pode se dividir se so tiver uma Gousma! \n");
                printf ("Agora é a vez de %s \nDigite [1] para atacar \n[2] para dividir", p1);
                scanf ("%d", &res);
                while(getchar() != '\n');
            }

            if (res == 1 ){
                int newRes;
                printf ("Selecione com qual G voce quer atacar! \n[1] G1 \n[2] G2\n");
                // PROTEÇÃO ADICIONADA:
                while (scanf ("%d", &newRes) != 1 || (newRes != 1 && newRes != 2)) {
                    printf ("Voce deve selecionar somente entre 1 ou 2 \n");
                    printf ("Selecione com qual gousma voce quer atacar \n[1] G1\n[2] G2");
                    while(getchar() != '\n');
                }
                while(getchar() != '\n');

                while ((newRes == 1 && g1p1 == 0) || (newRes == 2 && g2p1 == 0)) {
                    printf("Essa Gousma esta desintegrada! Escolha outra.\n");
                    printf ("Selecione com qual G voce quer atacar! \n[1] G1 \n[2] G2\n");
                    scanf ("%d", &newRes);
                    while(getchar() != '\n');
                }

                if (newRes == 1){
                    int resAtaq;
                    printf ("Selecione qual Gousma voce quer atacar! \n[1] G1\n [2] G2\n");
                    // PROTEÇÃO ADICIONADA:
                    while (scanf ("%d", &resAtaq) != 1 || (resAtaq != 1 && resAtaq != 2)){
                        printf ("Voce so pode escolher entre 1 ou 2 \n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                        while(getchar() != '\n');
                    }
                    while(getchar() != '\n');

                    while ((resAtaq == 1 && g1p2 == 0) || (resAtaq == 2 && g2p2 == 0)) {
                        printf("Essa Gousma esta desintegrada! Escolha outra.\n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                        scanf ("%d", &resAtaq);
                        while(getchar() != '\n');
                    }

                    if (resAtaq == 1){
                        g1p2 = (g1p2 + g1p1);
                        if (g1p2 > 5) g1p2 = 0;
                    }
                    else if (resAtaq == 2){
                        g2p2 = (g2p2 + g1p1);
                        if (g2p2 > 5) g2p2 = 0;
                    }
                }
                else if (newRes == 2){
                    int resAtaq;
                    printf ("Selecione qual Gousma voce quer atacar! \n[1] G1\n [2] G2\n");
                    // PROTEÇÃO ADICIONADA:
                    while (scanf ("%d", &resAtaq) != 1 || (resAtaq != 1 && resAtaq != 2)){
                        printf ("Voce so pode escolher entre 1 ou 2 \n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                        while(getchar() != '\n');
                    }
                    while(getchar() != '\n');

                    while ((resAtaq == 1 && g1p2 == 0) || (resAtaq == 2 && g2p2 == 0)) {
                        printf("Essa Gousma esta desintegrada! Escolha outra.\n");
                        printf ("Selecione a Gousma de %s que voce quer atacar!\n [1] G1\n [2] G2", p2);
                        scanf ("%d", &resAtaq);
                        while(getchar() != '\n');
                    }

                    if (resAtaq == 1){
                        g1p2 = (g1p2 + g2p1);
                        if (g1p2 > 5) g1p2 = 0;
                    }
                    else if (resAtaq == 2){
                        g2p2 = (g2p2 + g2p1);
                        if (g2p2 > 5) g2p2 = 0;
                    }
                }
            }
            else if (res == 2 && g1p1 == 0){
                int temp;
                temp = g2p1;
                g1p1 = (temp/2 + temp%2);
                g2p1 = (temp/2);
            }
            else if (res == 2 && g2p1 == 0){
                int temp;
                temp = g1p1;
                g2p1 = (temp/2 + temp%2);
                g1p1 = (temp/2);
            }
            
            printf ("Tabela \n%s \nG1: %d\nG2: %d\n%s\nG1: %d\nG2: %d \n\n", p1, g1p1, g2p1, p2, g1p2, g2p2);

        }

        if (g1p2 == 0 && g2p2 == 0) {
        printf("%s venceu!\n", p1);
        } else {
            printf("%s venceu!\n", p2);
        }

        int opcao;
        printf("[1] Jogar novamente\n[2] Voltar ao menu\n");
        // PROTEÇÃO ADICIONADA:
        if (scanf("%d", &opcao) != 1) {
            while(getchar() != '\n');
        }
        while(getchar() != '\n');

        if (opcao == 1) {
            gousmasWar();
        }

    }


}



int main() {
    int opcao = 0;
    srand(time(NULL));

    do {
        printf("\n=================================");
        printf("\n        ARCADE DE JOGOS");
        printf("\n=================================");
        printf("\n1 - Pergunta e Resposta (Quiz)");
        printf("\n2 - Cobra na Caixa");
        printf("\n3 - Gousmas War");
        printf("\n4 - Sair");
        printf("\nEscolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Digite apenas numeros!\n");
            while(getchar() != '\n'); 
            continue; 
        }
        while(getchar() != '\n'); // Limpa o Enter

        if(opcao == 1) perguntaserespostas();
        else if(opcao == 2) cobraNacaixa();
        else if(opcao == 3) gousmasWar();
        else if(opcao == 4) printf("Saindo...\n");
        else printf("Opcao invalida! Tente de 1 a 4.\n"); 
    } while (opcao != 4);
    return 0;
}
