#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	
	printf("Informe um numero: ");
	scanf("%d",&n);
	
	if(n%2 == 0){
		printf("Valor par\n");
	}else {
		printf("Valor impar\n");
	}
	
	system("pause");
	return 0;
}
