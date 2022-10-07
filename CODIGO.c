#include<stdio.h>
#include <math.h>
int main(void){
    
    //float começara com as opções a e b em 0, juntamente com o operador.
    float a=0, b=0, resultado=0;
    int operador=0;
    
      printf("NOME:Leonardo de Andrade Batista\n");
      printf("DISCPLINA:Algoritmos e Programação\n");
      printf("MATRICULA: 202120862\n");
      printf("Universidade La Salle, Canoas\n");
      
    //o "do while' ira cria esta repetição, para que possa ser feito todas as operações
    do{
        //nesta etapa, será informada os tipos de opções que o usuário deseja o usar.
        printf(" \n\t1 - SOMA:\n\t2 - SUBTRAÇÃO:\n\t3 - MULTIPLICAÇÃO:\n\t4 - POTÊNCIA:\n\t5 - RAIZ QUADRADA:\n\t6 - DIVISÃO:\n\t7 - INSIRA O NUMERO ESCOLHIDO =");
        scanf("%i", &operador);
        
        //usuário precisará inserir o valor da primeira opção.
        printf("\nInsira o primeiro número: ");
        scanf("%f", &a);
        
        //usuário deverá digitar o número desejado para pode criar o resultado da primeira opção.
        printf("\nInsira o segundo número: ");
        scanf("%f", &b);
        
       switch(operador){
           //foram criadas 6 opções, para que o usário possa escolher qual usar, com suas respectivas operações matemáticas.
            case 1:
                resultado = a+b;
                break;
            case 2:
                resultado = a-b;
                break;
            case 3:
                resultado = a*b;
                break;
            case 4: 
                resultado = a/b;
                break;
            case 5:
                resultado = pow(a,b);
                break;
            case 6:
                resultado = sqrt(a);
                break;
            default:
                printf("\n Digite uma opcao valida\n");
                break;
        }
        //fará a criação do resultado, exibindo uma frase juntamente.
        printf("\n\t O resultado e: %0.2f", resultado);
        
        //digitando o número 1 poderá ter a escolha de continuar fazendo a operação novamente.
        printf("\n Digite 1 para continuar: ");
        scanf("%i", &operador);
        }while(operador==1);
        //fechamento do código.
}

//Fonte base = https://pastebin.com/ShL5WPW8