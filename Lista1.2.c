#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int val;
	
	printf("Informe o em valor Mbps: ");
	scanf("%d",&val);
	
	printf("Valor convertido em Kbps: %d\n",val*1000);



	system("pause");
	return 0;
}
