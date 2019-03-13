#include<stdio.h>
/*8. Write C code to find sum of all
prime numbers between 1 to n*/
int main(){
	int n;
	int i,j;
	int sum=0;
	int isPrime;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		isPrime=1;
		for(j=2; j<=(i/2);j++){
			if(i%j==0){
				isPrime=0;
				break;
			}	
		}
		if(isPrime==1)
			sum+=i;
	}
	printf("%d",sum);
	
}
