#include<stdio.h>
#include<stdlib.h>
int main()
{
	int id;
	
	printf("Informe a sua idade: ");
	scanf("%d",&id);
	
	if(id < 16){
		printf("Nao eleitor\n");
	}else if(id >=18 && id < 65){
		printf("Eleitor obrigatorio\n");
	}else if(id>=16 && id<18 || id >= 65 ){
		printf("Eleitor facultativo\n");	
	}
	
	system("pause");
	return 0;
}
