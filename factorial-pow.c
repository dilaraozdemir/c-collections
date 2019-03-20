#include <stdio.h>
int main(){
	int x, k;
	int pow=1;
	int fac=1;
	int i;
	float result;
	
	printf("Sayiyi giriniz ");
	scanf("%d",&x);
	
	printf("Ussunu giriniz ");
	scanf("%d",&k);
	
	for(i=1;i<=x;i++){
		fac=fac*i;
	}
	for(i=1;i<=k;i++){
		pow=pow*x;
	}
	
	printf("fac = %d ",fac);
	printf("pow = %d ",pow);
	result = fac / pow;
	printf("result = %.2f ",result);
}
