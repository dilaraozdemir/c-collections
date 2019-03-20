/*Klavyeden girilen metnin kelime sayisini bulan C programi*/
#include<stdio.h>
int main(){
	char metin[100];
	int i = 0;
	int kSayac = 0;
	printf("Bir metin giriniz: ");
	gets(metin);
	
	while(metin[i]!='\0'){
		if(metin[i]==' '){
			kSayac++;
		}
		i++;
	}
	printf("%d kadar kelime vardir",kSayac);
}
/*
#include <stdio.h>
void main()
{
 char metin[100];
 int sayac=0,kelimeSayisi=1;
 printf("Metin giriniz:");
 gets(metin);
 while(metin[sayac] != '\0')
 {
 char karakter = metin[sayac];
 if(karakter==' ')
 kelimeSayisi++;
 sayac++;
 }
 printf("Girilen metin icerisinde %d kelime bulunur.", kelimeSayisi);
}
*/
