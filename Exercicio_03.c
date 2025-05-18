// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 09/04/2025
/* QUESTAO...........:

Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa
de 1 até 500.*/

#include <stdio.h>

int main()
{
    // variavel
    int somaNumPar = 0;

    // logica
    for (size_t i = 2; i <= 500; i+= 2)
    {
        somaNumPar += i;
    }

    printf("A soma dos numeros pares entre 1 e 500 e %d", somaNumPar);
    

    return 0;
}
