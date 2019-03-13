#include<stdio.h>
/*11.Write C code to check whether 
a number is Perfect number or not*/
int main(){
	int num;
	int a;
	int i;
	int sum=0;
	scanf("%d",&a);
	for(i=1;i<=(a-1);i++){
		num=a%i;
		if(num==0){
			sum+=i;
		}
	}
	if(sum==a)
		printf("The number is perfect");
	else
		printf("The number isn't perfect");
	
	
}
