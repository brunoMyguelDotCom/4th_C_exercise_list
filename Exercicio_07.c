// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 14/04/2025
/* QUESTAO...........:

Tema: Análise de Alturas de Alunos
Descrição:
Elabore um algoritmo em Linguagem C que leia 5 conjuntos de 2 valores, onde o primeiro valor
representa o número de um aluno e o segundo representa sua altura em centímetros. O
algoritmo deve identificar:
1. O aluno mais alto e o aluno mais baixo.
2. Exibir o número do aluno mais alto e do aluno mais baixo, juntamente com suas
respectivas alturas.
Tarefa:
1. Crie um loop para ler os dados de 5 alunos.
2. Armazene o número do aluno e sua altura em variáveis apropriadas.
3. Após a leitura, determine e exiba:
 O número e a altura do aluno mais alto.
 O número e a altura do aluno mais baixo.
Requisitos:
 O algoritmo deve usar estruturas de controle adequadas para a leitura dos dados e a
identificação dos alunos.
 Certifique-se de que o programa funcione corretamente para todos os 5 conjuntos de
dados.*/

#include <stdio.h>

int main () {

    // variaveis
    int altura, codigo, alturaMaisBaixo, codigoMaisBaixo, alturaMaisAlto, codigoMaisAlto;

    // logica
    alturaMaisBaixo = 300;
    alturaMaisAlto = 0;

    for (size_t i = 1; i <= 6; i++)
    {
        printf("Digite o codigo do aluno %d: ", i);
        scanf("%d", &codigo);

        printf("Digite a altura do aluno %d: ", i);
        scanf("%d", &altura);

        if (altura > alturaMaisAlto)
        {
            codigoMaisAlto = codigo;
            alturaMaisAlto = altura;
        }
        
        if (altura < alturaMaisBaixo)
        {
            codigoMaisBaixo = codigo;
            alturaMaisBaixo = altura;
        }
    }

    printf("----------------------\n");

    printf("Codigo do aluno mais alto: %d\n", codigoMaisAlto);
    
    printf("Altura do aluno mais alto: %d\n", alturaMaisAlto);

    printf("------------\n");

    printf("Codigo do aluno mais baixo: %d\n", codigoMaisBaixo);

    printf("Altura do aluno mais baixo: %d\n", alturaMaisBaixo);

    printf("----------------------\n");

    return 0;
}