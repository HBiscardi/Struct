#include<stdio.h>
#include<locale.h>
#include <ctype.h>

 struct Dados{
	char nome[10];
	int num;	
};

int main(){
	
	struct Dados dados [3];
	int num, i, cont=0;
	char continuar= 'S';	
	
	setlocale(LC_ALL,"portuguese");	
	
	printf("\n--------------INSTRUÇÕES-----------\n\n");
	
	printf("Os elementos da Struct contém: \n");
	printf("1 - Nome: Esta variavel deverá conter até 10 caracteres\n");
	printf("2 - Número do tipo inteiro\n");	
	printf("\n------------------------------------\n\n");
	
	
	do{
		printf("\nInforme o nome..........:");
		fgets(dados[i].nome,10,stdin);
		fflush(stdin);
		printf("Informe o número.........:");
		scanf("%d",&dados[i].num);
		printf("\n");
		fflush(stdin);
				
		printf("Deseja informar novo dado: [S/N]:   ");
		scanf("%c", &continuar);
		fflush(stdin);
		cont++;
				
		continuar = toupper(continuar);
	}while(continuar == 'S');

	
	system("cls");
		
	printf("\n--------------IMPRESSAO DE DADOS-----------\n\n");
	
	for(i=0;i<cont;i++){		
		printf("Nome..........:%s", dados[i].nome);		
		printf("Número digitado............:%d\n", dados[i].num);
		printf("\n");		
	}				
}
