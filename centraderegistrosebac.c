#include <stdio.h>//bliblioteca de comunica�ao com o usuario
#include <stdlib.h.>//blibioteca de aloca�ao de espa�o de memoria
#include <locale.h>//blibioteca de aloca�oes de texto por regiao
#include <string.h>//blibioteca reponsavel por cuidar das string

int registro()

{	
       char arquivo[40];
       char cpf[40];
       char nome[40];
       char sobrenome[40];
       char cargo[40];
       
       printf( "digite o cpf a ser cadastrado :");
       scanf("%s", cpf);
       
       strcpy(arquivo, cpf);//responsavel por copiar os valores das string
       
       FILE *file;//cria o arquivo 
       file = fopen(arquivo,"w");//cria o arquivo
       fprintf(file,cpf);//salvo o valor da variavel
       fclose(file);//fecha o arquivo
       
       file = fopen(arquivo,"a");
       fprintf(file,",");
       fclose(file);
       
       printf("Digite o nome a ser cadastrado:");
       scanf("%s",nome);
       
       file = fopen(arquivo, "a");
       fprintf(file,nome);
       fclose(file);
	   
	   file = fopen(arquivo,"a");
	   fprintf(file,",");
	   fclose(file);
	   
	   printf("Digite o sobrenome a ser cadastrado:");
	   scanf("%s",sobrenome);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file,sobrenome);
	   fclose(file);
	   
	   file = fopen(arquivo,"a");
	   fprintf(file,",");
	   fclose(file);
	   
	   printf("Digite o cargo a ser cadastrado:");
	   scanf("%s",cargo);
	   
	   file = fopen(arquivo, "a");
	   fprintf(file,cargo);
	   fclose(file);
	   
	   file = fopen(arquivo,"a");
	   fprintf(file,",");
	   fclose(file);
	   
	   
	   
       
       
}

int consulta()
{   
      setlocale (LC_ALL, "Portuguese");
      
      char cpf[40];
      char conteudo[200];
      
      printf("Digite o cpf a ser consultado:");
      scanf("%s",cpf);
      
      FILE * file;
      file = fopen(cpf,"r");
      
      if(file==NULL)
      {
        printf("N�o foi possivel abrir o arquivo desejado , n�o localizado !.\n\n");
      }
      
	  while(fgets(conteudo, 200, file) != NULL)
	  {
	    printf("\nEssas s�o as informa��es do usuario :");
	    printf("%s", conteudo);
	    printf("\n\n");
	    
	  }
	  
	  fclose(file);
	  system("pause");
}

int deletar()
{
    setlocale (LC_ALL, "Portuguese");
    
	char cpf [40];

    printf("Digite o CPF do us�ario a ser deletado :");
	scanf("%s",cpf);
	FILE *file;	
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}
	else
	{
		fclose(file);
		remove(cpf);
		FILE *file;	
		file = fopen(cpf,"r");
		if(file == NULL)
		{
			printf("Usu�rio deletado com sucesso!.\n");
			system("pause");
		}

}
     fclose(file);
}
    
      
int main ()
{
	int opcao=0;
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	 
	 
	printf( "### CENTRAL DE RESGISTROS EBAC ###\n\n\n");
	printf("login de administrador!\n\nDigite a sua senha:");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada,"admin");
	
	if(comparacao == 0)
	
		{
	
	    system ("cls");
    	 for(laco=1;laco=1;)
     	{
	
         	system("cls");
	
         	setlocale (LC_ALL, "Portuguese");
	
         	printf( "### CENTRAL DE RESGISTROS EBAC ###\n\n\n");
          	printf("\tMENU \n\n");
        	printf("\t1 - Registrar Nomes\n ");
         	printf("\t2 -Consultar Nomes \n");
         	printf("\t3 - Deletar Nomes \n");
            printf("\t4 - Sair Do Sistema !\n\n");
        	printf("\t - Op��o :");//fim do menu
	
	        scanf("%d", &opcao); //armazenando a escolha do usuario
	
          	system("cls");//inicio da sele��o
	
        	switch(opcao)
    	{
		    case 1: 
		
		    registro();
	     	break;
		
	     	case 2:
			 
	        consulta();
	        break;
	     
	       case 3:
	    	
	    	deletar();
	     	break;
		    
	    	case 4:
	    		
	    	printf(" Obrigado por ultilizar o sistema! \n");
            return 0;
		    break;
				
	    	default:
			
	    	printf("Essa op��o n�o est� disponivel!\n");
	    	system("pause");
	        break;
		
     	}

}
	}//fim da sele��o
	
	else
	  printf("Senha incorreta !");
	}
		
