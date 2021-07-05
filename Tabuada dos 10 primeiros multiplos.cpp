#include <stdio.h>
#include <stdlib.h>




 int main () {
 	int x;
 	int i[10];
 	int cont,p;
 	
 	    printf("digite seu numero para saber os 10 primeiros multiplos : ");
 	scanf("%i",&x);
 	
 	for(cont = 0; cont <= 10; cont++) {
 		i[cont]=cont*x;
 	printf("%d \n",i[cont]);	
 	    setbuf(stdin,NULL);

 	}
 }
 
	
 



