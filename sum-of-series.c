#include<stdio.h>
#include<math.h>
/*20.Write C code to find the
sum of the series
[ x + x^3 + x^5 + ......].*/
int main(){
	int n;
	int i=1;
	int sum=0;
	int j;
	int x;
	scanf("%d",&x);
	scanf("%d",&n);
	for(j=0;j<n;j++){
		do{
			sum=sum+(pow(x,i));
			i=i+2;
		}while(i<n);
	}
	printf("%d",sum);
	
}
