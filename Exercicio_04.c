// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 09/04/2025
/* QUESTAO...........:

Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20. Para
verificar se o número é ímpar, efetuar dentro da malha a verificação lógica desta condição com a
instrução IF, perguntando se o número é ímpar, sendo, mostre-o, não sendo, passe para o
próximo passo.*/

#include <stdio.h>

int main()
{
    for (size_t i = 0; i < 20; i++)
    {
        if (i % 2 != 0)
        {
            printf("Numero impar: %d\n", i);
        }
        
    }

    return 0;
}
