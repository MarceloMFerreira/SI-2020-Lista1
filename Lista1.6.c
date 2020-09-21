#include<stdio.h>
#include<stdlib.h>
int main()
{
	int v1,v2;
	printf("Informe o primeiro valor: ");
	scanf("%d",&v1);
	printf("Informe o segundo valor: ");
	scanf("%d",&v2);
	
	if(v1>v2){
		printf("Maior: %d\n",v1);
	}else
		printf("Maior: %d\n",v2);

	system("pause");
	return 0;
}
