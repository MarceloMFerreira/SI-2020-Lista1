#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char t1[99],t2[99];
	int g1,g2;
	
	printf("Informe o nome do primeiro time: ");
	gets(t1);
	printf("Informe o nome do segundo time: ");
	gets(t2);
	
	printf("\nInforme a quantidade de gols do %s: ",t1);
	scanf("%d",&g1);
	printf("Informe a quantidade de gols do %s: ",t2);
	scanf("%d",&g2);
	
	if(g1>g2){
		printf("\nRESULTADO\n%s %d X %d %s\n\nPONTOS\n%s: 3 pts\n%s: 0 pts\n",t1,g1,g2,t2,t1,t2);
	}else if(g1 == g2){
		printf("\nRESULTADO\n%s %d X %d %s\n\nPONTOS\n%s: 1 pts\n%s: 1 pts\n",t1,g1,g2,t2,t1,t2);
	}else if(g1 < g2){
		printf("\nRESULTADO\n%s %d X %d %s\n\nPONTOS\n%s: 3 pts\n%s: 0 pts\n",t1,g1,g2,t2,t2,t1);
	}
	
	
	
	system("pause");
	return 0;
}
