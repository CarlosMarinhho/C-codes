#include <stdio.h>
#include <stdlib.h>
int fatorial(int f)
{
	if (f) 
  	  return f*fatorial(f-1);
	else return 1;
}

int main()
{
	int f;
	printf("Digite um valor para n: ");
	scanf("%d", &f);
	printf("O fatorial de %d e %d", f, fatorial(f));
	return 0;
}
