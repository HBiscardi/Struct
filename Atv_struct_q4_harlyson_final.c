#include<stdio.h>
#include<locale.h>
struct dados_veiculo{
	char marca[20], modelo[20], cor[15],motorizacao[20];
	int portas;
		
};

void coleta_dados(int c, struct dados_veiculo *veiculo);
void exibir_veiculo(int c, struct dados_veiculo *veiculo);
void menu(int c, struct dados_veiculo *veiculo);
void opcoes(int opc,int c, struct dados_veiculo *veiculo);

int main(){
	setlocale(LC_ALL,"portuguese");
	struct dados_veiculo veiculo[10];
	int c;	
	
	menu(c,veiculo);

}
void menu(int c, struct dados_veiculo *veiculo){
	int opc;	
	do{		
		printf("===============AUTOCARS===============\n\n\n");
		printf("\tESCOLHA A OPÇÃO DESEJADA\n");
		printf("[1] - Cadastrar Veiculo\n");
		printf("[2] - Consultar Veiculos cadastrados\n");	
		scanf("%i",&opc);		
		if(opc<1||opc>2){
			printf("Opcao inválida");
		}		
	}while(opc<1||opc>2);


		
	
	opcoes(opc,c, veiculo);
	
}
coleta_dados(int c, struct dados_veiculo *veiculo){
	
	int i=0;
	char cont ='S';
	printf("\n--------------CADASTRO DE VEICULOS-----------\n\n");			
			while(cont == 'S' || cont =='s'&& i<10){					
				printf("\nInforme os dados do veiculo que deseja cadastrar:\n");
				fflush(stdin);
				printf("MARCA................:");
				fgets(veiculo[i].marca,20,stdin);
				fflush(stdin);
				printf("MODELO...............:");
				fgets(veiculo[i].modelo,20,stdin);
				fflush(stdin);
				printf("COR..................:");
				fgets(veiculo[i].cor,15,stdin);
				fflush(stdin);
				printf("MOTORIZACAO..........:");				
				fgets(veiculo[i].motorizacao,20,stdin);
				fflush(stdin);
				printf("QTDE PORTAS..........:");
				scanf("%i", &veiculo[i].portas);
				fflush(stdin);								
				printf("\nDeseja informar novo veiculo: S/N:");
				scanf("%c", &cont);
				fflush(stdin);				
				system("cls");
				i++;
				c++;				
			}	
	
	menu(c, veiculo);
}
void opcoes(int opc, int c,struct dados_veiculo *veiculo){
	
	switch (opc){
		case 1:
			coleta_dados(c,veiculo);
			
		break;
		case 2:
			if(c==0){
				printf("Ainda não há veiculos cadastrados\n");
				system("pause");
				system("cls");
				menu(c, veiculo);
										
				}else{					
				exibir_veiculo(c,veiculo);						
				}		
		break;
	}
}
void exibir_veiculo(int c, struct dados_veiculo *veiculo){
	
	int i;
	printf("\n--------------VEICULOS CADASTRADOS-----------\n\n");
	for(i=0;i<c;i++){
		printf("MARCA................:%s", veiculo[i].marca);
		printf("MODELO...............:%s", veiculo[i].modelo);
		printf("COR..................:%s", veiculo[i].cor);		
		printf("MOTORIZAÇÃO..........:%s", veiculo[i].motorizacao);
		printf("QTDE PORTAS..........:%d\n", veiculo[i].portas);
		printf("\n");			
	}	
}

