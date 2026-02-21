#include <stdio.h>
#include <string.h>
 
int main(){
    char i='s';
 char x;
 double a;
 double b;
  while(i=='s' || i == 'S'){
    printf("\n===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração");
    printf("\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
    
    scanf(" %c", &x);
    if(x!='1' && x!='2' && x!='3' && x!='4' && x!='5'){
        printf("erro");
        i='s';
    }
    if(x=='5'){
        printf("Obrigado por usar a calculadora! Até a próxima.");
        return 0;
    }
    if(x=='1'){
        printf("Digite o primeiro número: ");
        scanf("%lf", &a);
        printf("Digite o segundo número: ");
        scanf("%lf", &b);
        printf("Resultado: ");
        double c= a+b;
        printf("%lf + %lf = %lf", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n' || i == 'N'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }if(i == 's' || i == 'S' ){
          }
    }
    if(x=='2'){
        printf("Digite o primeiro número: ");
        scanf("%lf", &a);
        printf("Digite o segundo número: ");
        scanf("%lf", &b);
        printf("Resultado: ");
        double c= a-b;
        printf("%lf - %lf = %lf", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n' || i == 'N'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }if(i == 's' || i == 'S'){
            
          }
    }
    if(x=='3'){
        printf("Digite o primeiro número: ");
        scanf("%lf", &a);
        printf("Digite o segundo número: ");
        scanf("%lf", &b);
        printf("Resultado: ");
        double c= a*b;
        printf("%lf * %lf = %lf", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n' || i == 'N'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }if(i == 's' || i == 'S'){
            
          }
    }
    if(x=='4'){
        printf("Digite o primeiro número: ");
        scanf("%lf", &a);
        printf("Digite o segundo número: ");
        scanf("%lf", &b);
        if(b>0){
        printf("Resultado: ");
        double c= a/b;
        printf("%lf / %lf = %lf", a, b, c);
        printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n' || i == 'N'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }if(i == 's' || i == 'S'){
            
          }
        }else{
            printf("Erro: Divisão por zero não é permitida.");
            printf("\nDeseja realizar outra operação? ");
        scanf("%s", &i);
          if(i == 'n' || i == 'N'){
              printf("Obrigado por usar a calculadora! Até a próxima.");
              return 0;
          }if(i == 's' || i == 'S'){
            
          }
        }
     }
    }
 return 0;
 }

