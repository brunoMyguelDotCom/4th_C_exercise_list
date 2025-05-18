// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 09/04/2025
/* QUESTAO...........:

Apresentar o quadrado dos números inteiros de 15 a 200.*/

#include <stdio.h>

int main(){
    // variavel
    int cont;

    // logica
    for (cont = 15; cont < 201; cont++) {
        printf("Numero %d ao quadrado = %d\n", cont, cont*cont);
    }
    
    return 0;
}
