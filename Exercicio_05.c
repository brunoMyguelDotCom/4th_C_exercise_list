// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 14/04/2025
/* QUESTAO...........:

Apresentar as potências de 3 variando de 0 a 15. Deve ser considerado que qualquer número
elevado a zero é 1, e elevado a 1 é ele próprio. Deverá ser apresentado, observando a seguinte
definição:
30 = 1
31 = 3
32 = 9
(....)
315 = 14348907*/

#include <stdio.h>

int main()
{
    // variaveis
    int n = 3;
    int result = 1;
    int i;

    // 
    for (i = 0; i <= 15; i++)
    { 
        if (i == 0) {
            printf("3 elevado a %d = %d\n", i, 1);
        } else if(i == 1) {
            printf("3 elevado a %d = %d\n", i, n);
            result = result * n;
        } else {
            result = result * n;
            printf("3 elevado a %d = %d\n", i, result);
        }
    }

    return 0;
}
