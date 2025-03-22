#include<stdio.h>
#include<math.h>

	//a
	int computehomeValue(int popularity,int size){
		return((pow(popularity,3)+pow(size,3))*10000);
	}
	int main(){
		int homevalue,popularity,size;
		printf("Enter the popularity of the neighborhood:\n ");
		scanf("%d",&popularity);
		printf("Enter the size of the house:\n");
		scanf("%d",&size);
		int homeValue=computehomeValue(popularity,size);
		printf("the homeValue is %d",homeValue);
		return 0;
	
}
