#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	
	if(x>=432 && y<=468){
		printf("dentro");
	}else{
		printf("fora");
	}
	
	system("pause");
	return 0;
}
