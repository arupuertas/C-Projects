#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]){
 
 //Calculadora

 printf("|||||||||||||||||||||||||\n");
 printf("|***********************|\n");
 printf("|*|||||||||||||||||||||*|\n");
 printf("|*|||||CÁLCULADORA|||||*|\n");
 printf("|*|||||||||||||||||||||*|\n");
 printf("|***********************|\n");
 printf("|||||||||||||||||||||||||\n");

 float numero1, numero2, resultado;
 int tipoDeConta;

 printf("Digite o primeiro número");
 scanf("%f", &numero1);
 printf("%f", numero1);

 printf("Digite o segundo número");
 scanf("%.2f", &numero2);
 printf("%.2f", numero2);

printf("Qual o tipo de conta você deseja fazer ? \n");
printf("1 - Soma\n");
printf("2 - Subtração\n");
printf("3 - Multiplicação\n");
printf("4 - Divisão\n");
scanf("%d", &tipoDeConta);
printf("%d", tipoDeConta);

if (tipoDeConta == 1)
{
    resultado = numero1 + numero2;
    printf("O resultado é: %.2f", resultado);
}

else if(tipoDeConta == 2)
{
    resultado = numero1 - numero2;
    printf("O resultado é: %.2f", resultado);
}

else if(tipoDeConta == 3)
{
    resultado = numero1 * numero2;
    printf("O resultado é: %.2f", resultado);
}

else if(tipoDeConta == 4)
{
    resultado = numero1 / numero2;
    printf("O resultado é: %.2f", resultado);
}

 return 0;
 
 
}