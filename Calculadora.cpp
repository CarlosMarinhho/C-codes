#include <stdio.h>
#include <stdlib.h>

float multiplica (int x,float y) {
float resultado=0;
resultado=x*y;
 return resultado;	
}
float somar (int x,float y) {
float resultado=0;

resultado=x+y;
 return resultado;
	
}
float dividir (int x,float y) {
float resultado=0;
resultado=x/y;
 return resultado;
}
float subtrair (int x,float y) {
float resultado=0;

resultado=x-y;
 return resultado;
}


 int main () {
 	int x;
 	float y,resultado;
 	int escolha;
 	
 	    printf("digite seu primeiro numero: ");
 	scanf("%d",&x);
 	
 		printf("digite seu primeiro numero: ");
 	scanf("%f",&y);
 	
 	    printf("digite 1 para multiplicar,2 para somar,3 para dividir e 4 para subtrair: ");
 	scanf("%d",&escolha);
 	
 	if (escolha==1)
 	 printf("%2.f",multiplica(x,y));
 	if (escolha==2)
 	 printf("%2.f",somar(x,y));
 	if (escolha==3)
 	 printf("%2.f",dividir(x,y));
 	if (escolha==4)
 	 printf("%2.f",subtrair(x,y));
 }
