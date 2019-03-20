/*2-100 arasýndaki asal sayýlarý ekrana yazdýran algoritmanýn akýþ diyagramýný çiziniz*/
#include <stdio.h>
int main(){
	int sayi, sayac;
	int i;
	for(sayi=2;sayi<=100;sayi++){
		sayac=0;
		for(i=2;i<sayi;i++){
			if(sayi%i==0){
				sayac++;
			}
		}
		if(sayac==0){
			printf("%d ",sayi);
		}
	}
}
