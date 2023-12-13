#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Exercício 3:
Desenvolva uma struct "Produto" que contenha informações como nome, preço e quantidade em estoque. Em seguida,
desenvolva um menu para facilitar a escolha das opções:

1 - Realizar uma compra
2 - Consultar estoque
3 - Sair do programa.

Escreva funções necessárias para calcular o valor total em estoque do produto e para atualizar
a quantidade em estoque com base em uma compra. Crie um programa que utiliza essas funções para um produto.
*/

struct Produto
{

    char nome[101];
    float preco;
    int quantidade;
};

void limpaTela()
{

    fflush(stdin);
    system("cls || clear");
}

float compras(struct Produto compraProduto[])
{

    int codigoProduto;
    int quantidadeCompra;

    do
    {

        printf("1 - %s\n2 - %s\n3 - %s\n", );

            printf("Insira o código do produto:\n");
        scanf("%d", &codigoProduto);

        switch (codigoProduto)
        {
        case 1:
            printf("Digite a quantidade que deseja de %s\n", compraProduto[0].nome);
            scanf("%d", &quantidadeCompra);

                break;
        case 2:
            printf("Digite a quantidade que deseja de %s\n", compraProduto[1].nome);
            scanf("%d", &quantidadeCompra);

                break;

        case 3:
            printf("Digite a quantidade que deseja de %s\n", compraProduto[2].nome);
            scanf("%d", &quantidadeCompra);

                break;
        default:
            printf("Código do produto inválido, digite novamente!\n");
            Sleep(3000);
            limpaTela();
            break;
        }

    } while ((codigoProduto > 3) || (codigoProduto < 1));

    return ;
}

void consultaEstoque(struct Produto dadosProduto[])
{
int i;

    for (i = 0; i < 3; i++)
    {
        printf("Nome do %d° produto: %s\n", i + 1, dadosProduto[i].nome);
        printf("Preço individual do %d° produto: %s\n", i + 1, dadosProduto[i].preco);
        printf("Quantidade em estoque do %d° produto: %s\n", i + 1, dadosProduto[i].quantidade);
    }
}

void resultados(struct Produto coletaProdutos[])
{
 int i;
 float valorTotal[3];
 
  for (i = 0; i < 3; i++)
    {

        valorTotal[i] = coletaProdutos[i].preco * coletaProdutos[i].quantidade;
    }


}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct Produto dadosProduto[999];
    int codigo;
    int i;
    float valorTotal[3];

    strcpy(dadosProduto[0].nome, "Lápis");
    dadosProduto[0].preco = 2;
    dadosProduto[0].quantidade = 20;

    strcpy(dadosProduto[1].nome, "Caneta");
    dadosProduto[1].preco = 3;
    dadosProduto[1].quantidade = 30;

    strcpy(dadosProduto[2].nome, "Borracha");
    dadosProduto[2].preco = 1;
    dadosProduto[2].quantidade = 10;

  
    do
    {
        printf("1 - Realizar uma compra\n2 - Consultar estoque\n3 - Sair do programa\n\n");

        printf("Insira o código desejado:\n");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            printf("1 - Realizar uma compra\n\n");

            break;

        case 2:

            printf("2 - Consultar estoque\n\n");
            consultaEstoque(dadosProduto);

            break;

        case 3:
            limpaTela();
            printf("3 - Sair do programa\n\n");
            resultados(dadosProduto);

            break;

        default:

            printf("O código é inválido, reescreva!\n");
            Sleep(3000);
            limpaTela();

            break;
        }

    } while (codigo != 3);

    return 0;
}