// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 14/04/2025
/* QUESTAO...........:

Tema: Armazenamento e Análise de Cargos e Salários
Descrição:
Elabore um algoritmo em Linguagem C que armazene a descrição de 10 cargos e seus respectivos
salários. Ao final da execução, o algoritmo deve informar:
 A descrição do cargo com o maior salário.
 O valor desse maior salário.
Tarefa:
1. Ler o Cargo de 10 Funcionários
2. Ler os salários correspondentes a cada cargo.
3. Ao final da leitura, identifique e exiba:
 O cargo que possui o maior salário.
 O valor do maior salário.
Requisitos:
 O algoritmo deve utilizar estruturas de controle apropriadas para ler os dados e determinar
o cargo com o maior salário.
 Certifique-se de que o programa funcione corretamente para todos os 10 cargos.*/

#include <stdio.h>
#include <string.h>

int main () {

    // variaveis
    float salario, salarioMaisAlto;
    char cargo[30];
    char cargoMaiorSalario[30];

    // logica
    salarioMaisAlto = 0;

    for (size_t i = 1; i <= 10; i++) {
        printf("Digite o cargo do funcionaro %d: ", i);
        scanf("%s", &cargo);

        printf("Digite o salario do funcionario %d: ", i);
        scanf(" %f", &salario);

        if (salario > salarioMaisAlto) {

            salarioMaisAlto = salario;
            strcpy(cargoMaiorSalario, cargo);
        }
    }
    
    
    printf("----------------------\n");

    printf("Cargo com salario mais alto: %s\n", cargoMaiorSalario);
    
    printf("Salario mais alto: R$%.2f\n", salarioMaisAlto);

    return 0;
}
