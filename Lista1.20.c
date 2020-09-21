#include<stdio.h>
#include<stdlib.h>
int main()
{
	int val,i=0,m=0;
	val=2;
	for(i=0; val>-1;i++)
	{
	
		printf("Informe um valor: ");
		scanf("%d",val);
		
		if(val > m){
			m = val;
		}		
		
	}
	
	printf("Maior valor: %d",m);
		
	
	system("pause");
	return 0;
}
