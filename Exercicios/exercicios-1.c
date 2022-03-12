#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
 
 //Exercício 1

 float a, b, c;

 printf("Digite o numero a");
 scanf("%f", &a);
 printf("%d", a);

 printf("Digite o numero b");
 scanf("%f", &b);
 printf("%d", b);

 c = (a + b) / 2;
 printf("a média é %.2f", c);

 return 0;
 
 printf("Meu primeiro programa em C!");


}
