// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 09/04/2025
/* QUESTAO...........:

Apresentar os resultados de uma tabuada de um número qualquer. Esta deverá ser impressa no
seguinte formato:
Considerando como exemplo o fornecimento do número 02.
2x1=2
2x2=4
.
.
2 x 10 = 20*/

#include <stdio.h>

int main () {
    // variaveis 
    int num;

    printf("Digite um valor para ser impresso sua tabuada: ");
    scanf("%d", &num);

    // logica
    for (size_t i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}