#include <stdio.h>
#include <locale.h>
#define N 2


typedef struct Pessoa{
	int aNascimento;
	char nome[50];
	float altura;
} PESSOA;

// --> Função para Cadastrar Pessoas <-- \\

void cadastrarPessoa(PESSOA P[]){ // função para cadastrar pessoas
	int i;
	
	for(i = 0; i < N; i++){
		printf("Digite o Nome: ");
		scanf("%s", P[i].nome);
		printf("Digite o Ano de Nascimento: ");
		scanf("%d", &P[i].aNascimento);
		printf("Digite a Altura da Pessoa: ");
		scanf("%f", &P[i].altura);
		printf("%s Cadastrado com Sucesso!\n", &P[i].nome);
	}
}

// --> Função para Listar Pessoas <-- \\

void listarPessoas(PESSOA P[N]){
	int i;
	
	printf("Pessoas Cadastradas e suas Alturas:");
	for(i = 0; i < N; i++){
		printf("\n%s com %.2f metros", &P[i].nome, P[i].altura);
	}
	printf("\n\n");
}

// --> Função para Listar Pessoas Maiores de 18 <-- \\

void listarMaiores(PESSOA P[N]){
	int i;
	int ano = 2006;
	
	printf("Pessoas Maiores de 18 Anos:");
	for(i = 0; i < N; i++){
		if(P[i].aNascimento <= ano){
			printf("\n%s\n", P[i].nome);	
		}
	}
}


main(){
	int op;
	PESSOA P[N];
	setlocale(LC_ALL, "Portuguese");
	
		do{
			printf("1 - Cadastrar Pessoa\n");
			printf("2 - Listar Pessoas Cadastradas\n");
			printf("3 - Listar Pessoas Maiores de 18\n");
			printf("4 - Sair do Programa\n");
			printf("\nSua Opção: ");
			scanf("%d", &op);
		
	
			switch(op){
				case 1:
					cadastrarPessoa(P);
					break;
				case 2:
					listarPessoas(P);
					break;
				case 3:
					listarMaiores(P);
					break;
				case 4:
					break;
		
			}	   	
	 	} while(op != 4);
			printf("Saindo do Programa...");
			return 0;	
}
