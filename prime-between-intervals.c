/*2. C Program to Display Prime Numbers Between Intervals Using Function
Example to print all prime numbers between two numbers (entered by the user) by making a user-defined function.
*/
#include <stdio.h>
int displayPrime(int low, int high){
	int i=0;
	int j;
	int sayac=0;
	for(i=low;i<high;i++){
		sayac=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				sayac++;
			}
		}
		if(sayac==0){
			printf("%d, ",i);
		}
	}
}
int main(){
	int a, b;
	printf("Low degeri giriniz: ");
	scanf("%d",&a);
	printf("High degeri giriniz: ");
	scanf("%d",&b);
	
	displayPrime(a,b);
}
