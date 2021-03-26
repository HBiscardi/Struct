#include<stdio.h>

struct cadastro{
	char nome[25], endereco[50], telefone[11];	
};

void coleta_dados (struct cadastro cad[3][3]);
void imprime_dados(struct cadastro cad[3][3]);

main(){
	
struct cadastro cad[3][3];
		
	coleta_dados(cad);
	imprime_dados(cad);	
		
}

void coleta_dados(struct cadastro cad [3][3]){
	int i, j;
	printf("\n--------------COLETA DE DADOS-----------\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nInforme o nome:");
			fgets(cad[i][j].nome,20,stdin);
			fflush(stdin);
			printf("Informe o endereco:");
			fgets(cad[i][j].endereco, 50, stdin);
			fflush(stdin);
			printf("Informe o telefone:");
			fgets(cad[i][j].telefone, 11, stdin);
			fflush(stdin);
		}
	}	
}
void imprime_dados(struct cadastro cad [3][3]){
	
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("\n--------------IMPRESSAO DE DADOS-----------\n\n");	
		
			printf("\nNome...........:%s",cad[i][j].nome);
			printf("Endereco.......:%s",cad[i][j].endereco);	
			printf("Telefone.......:%s",cad[i][j].telefone);	
		}
	}
	
}
	

