#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define quantidade  5
#define contador 2

struct dados {

char nome [100];
char dataNascimento  [100];
float Nota [2];
float media;
};

// ------------Operação de ddados-----------

float CalcularMedia (struct dados aluno []) {

    setlocale(LC_ALL, "portuguese");  
    
int i;
float Media;
int j;
float SomaNota = 0;

 for ( i = 0; i < quantidade; i++)
{
	
for (j = 0; j < contador; j++ )  {
    SomaNota+= aluno[i].Nota[j]; 
}
    Media = SomaNota/contador;  
 }
 return Media;
                                         }
                                         
                                      
void verificacao(struct dados aluno[]) {
	
	int i;
	
	char Resultado[100];
	for (i = 0; i < quantidade; i++) {
	if (Media >= 7) {
	strcmpy(Resultado, "Aluno aprovado");
	} else {		
	strcmpy(Resultado, "Aluno reprovado");
	}
	}
	printf("%s", Resultado);		
}                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         
                                         

//--------Recebimento de dados------------
int main () {	
int i;
int j = 0;
int k = 0;
int SomaNota = 0;

    setlocale(LC_ALL, "portuguese");

struct dados aluno[5];

 for ( i = 0; i < quantidade; i++)
 {
    k++;
    printf("Informe o nome do %dº aluno: \n", k);
    gets(aluno[i].nome);

    printf("Informe a %dº data de nascimento: \n", k);
    gets(aluno[i].dataNascimento);

  for (j =0; j < contador; j++ )  {
    k=0;
    k++;
    printf("Informe a %dº nota: \n", k);
    scanf("%f", &aluno[i].Nota[j]);  
 
   }
  }
 
  CalcularMedia(aluno);
 
    return 0;
}
