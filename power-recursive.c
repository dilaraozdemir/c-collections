#include<stdio.h>
int power(int base,int exponent){
	int i=0;
	if(i<exponent){
		i++;
		return power(base,exponent-1)*base;
	}
	else
		return 1;
}
int main(){
	int x, y;
	printf("Enter base: ");
	scanf("%d",&x);
	printf("Enter exponent: ");
	scanf("%d",&y);
	
	printf("result: %d",power(x,y));
	
}
