#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,rq;
	printf("Informe um valor: ");
	scanf("%d",&n);
	if(n>0){
		printf("O numero ao quadrado: %d\n",n*n);
		rq = sqrt(n);
		printf("A raiz quadrada: %d\n",rq);
	}
	else{
		printf("Valor negativo");
	}

	system("pause");
	return 0;
}
