// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 14/04/2025
/* QUESTAO...........:

Tema: Contagem de Votos em uma Eleição Presidencial
Descrição:
Em uma eleição presidencial, há quatro candidatos. Os votos são informados através de
códigos, conforme a seguinte codificação:
 1: Voto para o Candidato 1
 2: Voto para o Candidato 2
 3: Voto para o Candidato 3
 4: Voto para o Candidato 4
 5: Voto Nulo
 6: Voto em Branco
Tarefa:
Elabore um Programa em Linguagem C que realize as seguintes operações:
1. Leia o código do voto do Eleitor
2. Calcule e exiba:
 O total de votos para cada um dos quatro candidatos.
 O total de votos nulos.
 O total de votos em branco.
A entrada de votos deve ser finalizada ao receber o valor 0.
Requisitos:
 O programa deve ser capaz de lidar com entradas contínuas até que o valor finalizador
(0) seja informado.
 Utilize estruturas de controle adequadas para realizar a contagem dos votos.
Observação.: Utilizar comando de Repetição DO-WHILE*/

#include <stdio.h>

int main()
{
    // variaveis
    int opcao;
    int cand01 = 0; 
    int cand02 = 0; 
    int cand03 = 0; 
    int cand04 = 0;
    int votosNulos = 0;
    int votosBrancos = 0;


    // logica
    do
    {
        printf("\n\nLista de opcoes: \n\n");
        printf("'1' - Voto para o Candidato 1 \n");
        printf("'2' - Voto para o Candidato 2 \n");
        printf("'3' - Voto para o Candidato 3 \n");
        printf("'4' - Voto para o Candidato 4 \n");
        printf("\n'5' - Voto nulo \n");
        printf("\n'6' - Voto em branco \n");
        printf("\n'0' - SAIR \n");

        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            printf("FINALIZAR PROGRAMA!\n");
            break;

        case 1:
            cand01 += 1;
            break;

        case 2:
            cand02 += 1;
            break;

        case 3:
            cand03 += 1;
            break;

        case 4:
            cand04 += 1;
            break;

        case 5:
            votosNulos += 1;
            break;

        case 6:
            votosBrancos += 1;
            break;

        default:
            printf("Opcao invalida!!\n");
            break;
        }

    } while (opcao != 0);

    // print

    printf("Numero de votos do candidato 01: %d\n", cand01);
    printf("Numero de votos do candidato 02: %d\n", cand02);
    printf("Numero de votos do candidato 03: %d\n", cand03);
    printf("Numero de votos do candidato 04: %d\n", cand04);

    printf("Numero de votos nulos: %d\n", votosNulos);
    printf("Numero de votos brancos: %d\n", votosBrancos);


    return 0;
}
