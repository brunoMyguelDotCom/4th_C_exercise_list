// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 14/04/2025
/* QUESTAO...........:

Tema: Análise de Dados da População
Descrição:
A prefeitura de uma cidade realizou uma pesquisa entre seus habitantes, coletando dados sobre
o salário e o número de filhos. Com base nessa pesquisa, a prefeitura deseja obter as seguintes
informações:
1. Média do salário da população.
2. Média do número de filhos.
3. Maior salário registrado.
4. Percentual de pessoas com salário até R$100,00.
Tarefa:
Elabore um algoritmo em Linguagem C que:
 Leia repetidamente o salário e o número de filhos de cada habitante.
 Calcule e exiba:
 A média do salário da população. A média do número de filhos.
 O maior salário.
 O percentual de pessoas com salário até R$100,00.
Observações:
 A leitura de dados deve ser finalizada quando um salário negativo for informado.
 Utilize a estrutura de controle do-while para garantir que os dados sejam lidos pelo
menos uma vez.*/

#include <stdio.h>

int main()
{
    // variaveis
    int numeroDeFilhos, numeroTotalDeFilhosPopulacao, opcao;
    int numeroDeHabitantes = 0;
    float salario, salarioTotalPopulacao;
    float salarioMaior = 0;

    // logica
    do {
        printf("Digite o numero de filhos: ");
        scanf("%d", &numeroDeFilhos);
        numeroTotalDeFilhosPopulacao += numeroDeFilhos;
        
        printf("Digite o salario: ");
        scanf("%f", &salario);
        salarioTotalPopulacao += salario;

        if (salario > salarioMaior)
        {
            salarioMaior = salario;
        }
        
        numeroDeHabitantes ++;
        
        printf("Digite a opcao ('1' - novo habitante, '0' - sair): ");
        scanf("%d", &opcao);
    } while (opcao != 0);

    // print
    printf("Media salarial da populacao: R$%.2f\n", salarioTotalPopulacao / numeroDeHabitantes);

    printf("Maior salario registrado: R$%.2f\n", salarioMaior);
    return 0;
}

