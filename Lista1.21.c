#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=0, i, atual=1, ante=1, prox=0;
    float total=0;
    while(num<=0)
    {
        printf("Digite a qtde de termos: ");
        scanf("%d", &num);
    }
    for(i=0;i<num;i++)
    {
        if(i==0)
        {
            printf("0, ");
        }else if(i==1 || i==2)
        {
            printf("1, ");
            total=total+1;
        }else
        {
            prox=ante+atual;
            ante=atual;
            atual=prox;
            printf("%i, ",prox);
            total=total+atual;
        }
    }

	system("pause");
	return 0;
}
