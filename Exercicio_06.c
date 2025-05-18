// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 09/04/2025
/* QUESTAO...........:

Tema: Cálculo da Soma de Números Inteiros
Descrição:
Elabore um algoritmo em Linguagem C que utilize o comando de repetição for para calcular a
soma de uma sequência de números inteiros. O programa deve solicitar ao usuário que informe
quantos números ele deseja somar e, em seguida, ler esses números e calcular a soma total.
Tarefa:
1. Solicite ao usuário que digite a quantidade de números que deseja somar.
2. Utilize um loop for para ler cada número informado pelo usuário.
3. Calcule a soma total dos números informados.
4. Exiba o resultado da soma.
Exemplo de Saída:
 Se o usuário informar que deseja somar 3 números e fornecer os números 4, 5 e 6, a
saída deve ser:
A soma total é: 15
Requisitos:
 O algoritmo deve validar a entrada do usuário, garantindo que a quantidade de números
seja um inteiro positivo.
Utilize o comando for para realizar a repetição necessária para ler os números e calcular
a soma.*/

#include <stdio.h>

int main()
{
    
    int numDeSomas, numAtual;
    int soma = 0;

    printf("Digite a quantidade de numeros que serao somados: ");
    scanf("%d", &numDeSomas);

    for (size_t i = 1; i < numDeSomas + 1; i++)
    {
        printf("Digite %dº numero: ", i);
        scanf("%d", &numAtual);

        soma +=  numAtual;
    }
     
    printf("Soma total: %d\n", soma);

    return 0;
}
