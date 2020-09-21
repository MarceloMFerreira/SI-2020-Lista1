#include<stdio.h>
#include<stdlib.h>
int main(){
	int bv,ba,bb,pf;
	printf("Quantidade de bolas verdes: ");
	scanf("%d",&bv);

	printf("Quantidade de bolas amarelas: ");
	scanf("%d",&ba);
	
	printf("Quantidade de bolas brancas: ");
	scanf("%d",&bb);
	
	pf = bv*10 + ba*5 + bb*3;
	
	printf("Pontuacao final: %d\n",pf);	
	
	
	
	
	system("pause");
	return 0; 
}
