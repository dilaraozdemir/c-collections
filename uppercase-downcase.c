/*Klavyeden girilen metin icerisindeki kucuk ve buyuk harf sayisini bulan C program */
#include <stdio.h>
int main(){
	char metin[100];
	int i=0;
	int kucuk = 0, buyuk = 0;
	
	printf("Bir metin giriniz: ");
	gets(metin);
	
	while(metin[i]!='\0'){
		if(metin[i]>='A' && metin[i]<='Z'){
			buyuk++;
		}
		else if(metin[i]>='a' && metin[i]<='z'){
			kucuk++;
		}
		i++;
	}
	printf("%d kadar kucuk harf vardir. \n%d kadar buyuk harf vardir",kucuk,buyuk);
	
}
/*
#include <stdio.h>
#include <stdlib.h>
void main()
{
 char metin[100];
 int sayac=0,kSayac=0, bSayac=0;
 printf("Metin giriniz:");
 gets(metin);
 while(metin[sayac] != '\0')
 {
 char karakter= metin[sayac];
 if(karakter>='a' && karakter<='z')
 kSayac++;
 else if(karakter>='A' && karakter<='Z')
 bSayac++;
 sayac++;
 }
 printf("Girilen metin icerisinde %d kucuk %d buyuk harf bulunur.", kSayac,
bSayac);
*/
