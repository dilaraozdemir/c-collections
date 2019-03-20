#include <stdio.h>
int main(){
	int a,b;
	char secim;
	float result;
	
	printf("Yapmak istediginiz islemi girin: ");
	scanf("%c",&secim);
	
	printf("Sayilari giriniz: ");
	scanf("%d %d",&a,&b);
	
	switch(secim){
		case '+':
			result = a + b;
			printf("result = %.2f", result);
			break;
		case '-':
			result = a - b;
			printf("result = %.2f", result);
			break;
		case '/':
			result = a / b;
			printf("result = %.2f", result);
			break;
		case '*':
			result = a * b;
			printf("result = %2.f", result);
			break;
	}
}
