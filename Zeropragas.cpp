#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	system("color 1f");
	char nome[60],endereco[100];
	int opcao;
	float nota;
	
	printf("\t\t\t\t****************Sejam bem vindos a ZEROPRAGAS dedetiza��o****************\n\n\n");
	printf("\t\t\t____________Fazer um cadastro no terminal____________\n\n ");
	printf("\t\tPor favor digite o seu nome:\n\n");
	gets(nome);
	
	printf("\n\t\tAgora %s digite o endere�o de onde voc� mora:\n\n",nome);
	gets(endereco);
	
	printf("\t\t\tO seu nome � = %s, e o seu logadouro � = %s\n\n",nome,endereco);
	printf("\t\t\t(1) Sim\n");
	printf("\t\t\t(2) N�o\n");
	scanf("%d",&opcao);
	
	if(opcao<=1){
		printf("\t\tOs seus dados est�o corretos, aperte o ENTER para continuar o cadastro\n\n");
	}
	else{
		printf("\t\tOs seus dados est�o incorretos, FECHE o programa e comece novamente,\n\n");
	}
	printf(" se est�o **CORRETOS** aperte o ENTER, se est�o *INCORRETOS* feche o programa e tente novamente o cadastro.\n\n" );
	system("\t\tpause");
	
	
	printf("\t\t\tAgora escolha o servi�o desejado:\n\n");
	printf("\t\t(1) DESINSETIZA��O\n" );
	printf("\t\t(2) DESCUPINIZA��O\n ");
	printf("\t\t(3) DESRATIZA��O\n ");
	printf("\t\t(4) CONTROLE INTEGRADO\n ");
	printf("\t\t(5) LIMPEZA DE CAIXA D'AGUA\n ");
	printf("\t\t(6) COMBATE � DENGUE\n ");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("\n\t\t%s escolheu o servi�o de DESINSETIZA��O.\n ",nome);
			break;
			
			case 2:
				printf("\n\t\t%s escolheu o servi�o de DESCUPINIZA��O.\n ",nome);
				break;
				
				case 3:
					printf("\n\t\t%s escolheu o servi�o de DESRATIZA��O.\n ",nome);
					break;
					
					case 4:("\n\t\t% escolheu o servi�o de CONTROLE INTEGRADO.\n ",nome);
					break;
					
					case 5:
						printf("\n\t\t%s escolheu o servi�o de LIMPEZA D'AGUA.\n ",nome);
						break;
						
						case 6:
							printf("\n\t\t%s escolheu o servi�o de COMBATE � DENGUE.\n",nome);
							break;
							
							default:
								printf("\n\t\t%s escolheu a op��o errada. Feche o programa e tente outra vez.\n\n",nome);
								break;
	}	
	printf("\n\t\t\t___________Deixe aqui a sua nota referente ao nosso atendimento:___________\n\n");
	printf("\n\t\t\tMENU\n\n");
	printf("\t\t entre 0 e 4 atendimento RUIM.\n");
	printf("\t\t 5 atendimento REGULAR.\n");
	printf("\t\t entre 6 � 10 atendimento EXCELENTE.\n");
	
	printf("\n\t\t%s digite a sua nota referente ao atendimento:\n",nome);
	scanf("%f",&nota);
	
	if(nota<5){
		printf("\n\t\t Nosso atendimento foi ""RUIM"", vamos melhorar nosso atendimento, DESCULPEM-NOS.\n");
	}
	else if(nota>5){
		printf("\n\t\tATENDIMENTO ""EXCELENTE"", muito obrigado!! Vamos continuar mantendo o foco.\n\n");
	}
	else{
		printf("\t\tNosso atendimento foi ""REGULAR"", estamos prosperando para chegar ao excente.\n ");
	
	}
	system("pause");
	
	printf("\t\t\t\t\t\t____________A ZEROPRAGAS agradece o seu contato, Obrigado e volte sempre!!____________\n\n");
	return 0;
}
