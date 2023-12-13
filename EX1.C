#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define quantidade  3

struct dados {

char contato [100];
char numero  [100];
char email   [100];
};

// ------------Operação de ddados-----------
char *ACHARNOME (struct dados *agenda, char *contatoDesejado) {

    setlocale(LC_ALL, "portuguese");
    
int i;
char numeroDesejado[100];


 for ( i = 0; i < quantidade; i++)
{
if (strcmp (agenda[i].contato, contatoDesejado) == 0){
    strcpy(numeroDesejado, agenda[i].numero);
    printf("Numero de contato desejado %s", numeroDesejado);
} else {
   strcpy(numeroDesejado, "Número não encontrado\n");
      }
      
}

 return numeroDesejado;
                                         }

//--------Recebimento de dados------------
int main () {	
int i;
int j = 0;
char contatoDesejado [100];
    setlocale(LC_ALL, "portuguese");

struct dados agenda[3];

 for ( i = 0; i < quantidade; i++)
 {
    j++;
    printf("Informe o nome do %dº contato\n", j);
    gets(agenda[i].contato);

    printf("Informe o %dº número\n", j);
    gets(agenda[i].numero);

    printf("Informe o %dº email\n", j);
    gets(agenda[i].email);  
 }
 
 printf("Qual contato deseja imprimir na tela?");
 gets(contatoDesejado);
 
 
 ACHARNOME(agenda, contatoDesejado);
 
    return 0;
}
