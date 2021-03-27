#include<stdio.h>
 struct DadosAluno{
	char nome[25], idade[3];	
};
int main(){
	
	struct DadosAluno dados[3];
	int i;
	
	printf("\n--------------COLETA DE DADOS-----------\n\n");
	for(i=0;i<3;i++){		
		printf("\nInforme o nome do %i%c aluno........:", i+1,167);
		fgets(dados[i].nome,25,stdin);
		fflush(stdin);
		printf("Informe a idade do %i%c aluno.........:", i+1,167);
		fgets(dados[i].idade, 3, stdin);
		fflush(stdin);		
	}
	
	system("cls");
		
	printf("\n--------------IMPRESSAO DE DADOS-----------\n\n");
	for(i=0;i<3;i++){		
		printf("\nO nome do %i%c aluno........:%s\n", i+1,167,dados[i].nome);		
		printf("A idade do %i%c aluno e.........:%s\n", i+1,167,dados[i].idade);	
		
	}				
}
