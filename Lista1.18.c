#include<stdio.h>
#include<stdlib.h>
int main()
{
	int val,i,tab;
	
	printf("Informe um valor: ");
	scanf("%d",&val);
	
	printf("-----------------------------------------------------------------------\n");
	
	for(i=0; i<=10; i++){
		tab = val * i;
		printf("%d x %d = %d\n",val,i,tab);	
	}
	
	printf("\n-----------------------------------------------------------------------\n");

	
	
	
	system("pause");
	return 0;
}
