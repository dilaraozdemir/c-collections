/*Pentagon sayýlarý Pn=n(3n-1)/2 formülüne göre üretilmektedir. 100'den küçük pentagon
sayýlarýný ekrana yazdýrýn.*/
#include<stdio.h>
int main(){
	int i;
	int sayi;
	int pN;
	for(i=1;i<100;i++){
		pN=i*(3*i-1)/2;
		if(pN<100){
			printf("%d, ",pN);
		}
	}
}
