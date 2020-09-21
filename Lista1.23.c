#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b,e,p=0,i;
	
	printf("Informe o valor da base: ");
	scanf("%d",&b);
	printf("Informe o valor do expoente: ");
	scanf("%d",&e);
	
	
	for(i=1; i<e; i++){
		if(p == 0){
		p = b * b;
		}else
		p = p * b;
	}
	printf("Rsultado: %d\n",p);	
	
	system("pause");
	return 0;
}
