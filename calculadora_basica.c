#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int soma(int num_a,int num_b);
int subtracao(int num_a,int num_b);
float divisao(int num_a,int num_b);
int multiplicacao(int num_a,int num_b);
void inicio(){printf("Bem Vindo à minha calculadora básica\n\n\n\n powerdby: Ruben Laranjo \n");};

int main(){
//printf("Hellow World");
system("clear");
inicio();
sleep(1);
system("clear");
int num_a; int num_b; char op; float resultado;
printf("Insira o primeiro numero da operação que deseja utilizar:\n");
scanf(" %d",&num_a);
system("clear");
printf("Insisar a operação que deseja efetura:");
scanf(" %c",&op);
system("clear");
printf("Insira o segundo numero da operação que deseja utilizar:\n");
scanf(" %d",&num_b);
system("clear");
printf("A sua operacao foi a seguinte: %d %c %d\n",num_a,op,num_b);
switch (op)
{
    case '+':
        resultado = soma(num_a,num_b);
        break;
    case '-':
        resultado = subtracao(num_a,num_b);
        break;
    case '*':
        resultado = multiplicacao(num_a,num_b);
        break;
    case '/':
        resultado = divisao(num_a,num_b);
    break;
    default:
        printf("operacao invalida");
        break;
}

printf("O resultado e: %.2f\n",resultado);

return 0;
}


int soma(int num_a,int num_b){
return num_a + num_b;
}

int subtracao(int num_a,int num_b){
return num_a - num_b;
}

int multiplicacao(int num_a,int num_b){
return num_a * num_b;
}

float divisao(int num_a,int num_b){
    while(num_b == 0){
        
        printf("insira um valor diferente de zero");
        scanf(" %d",&num_b);
    }
    return (float)num_a / num_b;
}