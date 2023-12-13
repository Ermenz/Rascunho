#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*
Exerc�cio 5:

Crie uma struct "Funcionario" com membros para nome, cargo e sal�rio. Escreva uma fun��o que recebe um array de
funcion�rios e um cargo como par�metro, e retorna a m�dia salarial dos funcion�rios com esse cargo.
Em seguida, implemente um programa que utiliza essa fun��o para calcular e imprimir a
m�dia salarial dos programadores em uma empresa.*/

struct Funcionario
{
    char nome[101];
    char cargo[101];
    float salario;
    float mediaSalarioCargo;
};

void limpaTela()
{

    fflush(stdin);
    system("cls || clear");
}

float calculoMediaCargos(struct Funcionario cargosColetados[], int contadorTotal)
{
    int i, j;
    float somaNotas = 0;

    for (i = 0; i < contadorTotal; i++)
    {
        for (j = 0; j < contadorTotal; j++)
        {
            if (strcmp(cargosColetados[i].cargo, cargosColetados[j].cargo) == 0)
            {

                somaNotas += cargosColetados[i].salario;
            }
        }
        cargosColetados[i].mediaSalarioCargo = somaNotas / contadorTotal;
        somaNotas = 0;
    }

    return cargosColetados->mediaSalarioCargo;
}

float calculoMedia(struct Funcionario funcionariosColetados[], int counter)
{
    int i;
    float somaSalarios = 0;
    float mediaTotal;

    for (i = 0; i < counter; i++)
    {

        somaSalarios += funcionariosColetados[i].salario;
    }
    mediaTotal = somaSalarios / counter;

    return mediaTotal;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int contadorFuncionarios, i, j;
    struct Funcionario dadosFuncionarios[contadorFuncionarios];

    printf("Digite o n�mero de funcion�rios da empresa:\n");
    scanf("%d", &contadorFuncionarios);

    printf("\n");

    for (i = 0; i < contadorFuncionarios; i++)
    {
        fflush(stdin);
        printf("Insira o nome do %d� funcion�rio:\n", i + 1);
        gets(dadosFuncionarios[i].nome);
        fflush(stdin);

        fflush(stdin);
        printf("Insira o cargo do %d� funcion�rio:\n", i + 1);
        gets(dadosFuncionarios[i].cargo);
        fflush(stdin);

        printf("Insira o sal�rio do %d� funcion�rio:\n", i + 1);
        scanf("%f", &dadosFuncionarios[i].salario);
        printf("\n");
    }

    limpaTela();

    for (i = 0; i < contadorFuncionarios; i++)
    {
        printf("Nome do %d� funcion�rio: %s\n", i + 1, dadosFuncionarios[i].nome);
        printf("Cargo do %d� funcion�rio: %s\n", i + 1, dadosFuncionarios[i].cargo);
        printf("Sal�rio do %d� funcion�rio: R$ %.2f\n", i + 1, dadosFuncionarios[i].salario);
        printf("\n");
    }

    calculoMediaCargos(dadosFuncionarios, contadorFuncionarios);

    for (i = 0; i < contadorFuncionarios; i++)
    {
        for (j = 0; j < contadorFuncionarios; j++)
        {

            if (strcmp(dadosFuncionarios[i].cargo, dadosFuncionarios[j].cargo) != 0)
            {
                printf("M�dia salarial do cargo de %s: R$ %.2f\n", dadosFuncionarios[i].cargo, dadosFuncionarios[j].mediaSalarioCargo);
            }
        }
        printf("\n");
    }

    printf("Quantidade de funcion�rios na empresa: %d\n", contadorFuncionarios);
    printf("M�dia salarial total dos funcion�rios: R$ %.2f\n", calculoMedia(dadosFuncionarios, contadorFuncionarios));

    return 0;
}