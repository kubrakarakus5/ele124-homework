#include<stdio.h>
int main(){
	int homeValue,popularity,size;
	printf("Enter the popularity of the neighborhood:\n");
	scanf("%d",&popularity);
	printf("Enter the size of the house:\n ");
	scanf("%d",&size);
	homeValue=((popularity*popularity*popularity)+(size*size*size))*10000;
	printf("The homevalue is:%d",homeValue);
	return 0;
}
