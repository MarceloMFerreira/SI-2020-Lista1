#include<stdio.h>
#include<stdlib.h>
int main()
{
	int op=1,i,val, mdi,mdp,qtdi,qtdp,ttp,tti;

	
	
	for(i=0; op==1; i++){
		printf("Informe um valor: ");
		scanf("%d",&val);
		
		if(val % 2 == 0){
			qtdp++;
			ttp = ttp + val;
		} else{
			qtdi++;
			tti = tti + val;
		}
		printf("Digite 1 para adicionar outro valor ou 2 para encerrar: ");
		scanf("%d",&op);
		printf("\n");
	}
	qtdi--;
	mdp = ttp/qtdp;
	mdi = tti/qtdi;
	printf("====================================================");
	printf("\nMedia dos numeros pares: %d\nMedia dos numeros impares: %d\n",mdp,mdi);
	

	system("pause");
	return 0;
}
