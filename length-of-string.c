/*Klavyeden girilen metnin karakter uzunlugunu bulan C programi*/
#include <stdio.h>;
int main(){
	char metin[100];
	printf("Bir metin giriniz");
	gets(metin);
	int i = 0;
	while(metin[i]!='\0'){
		i++;
	}
	printf("Metin uzunlugu: %d",i);
}
