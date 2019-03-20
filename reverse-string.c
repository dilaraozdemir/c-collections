/*Klavyeden girilen metni tersten ekrana yazdiran C programi*/
//Fonksiyonla yazmaya çalýþtýðým kod çalýþmýyor
#include <stdio.h>
#include <stdlib.h>
int karakterSay(char metin[]){
	int i=0;
	while(metin[i]!='\0'){
		i++;
	}
	return i;
	
}
int tersiniBul(char metin[]){
	int j=0;
	int temp;
	int karakterSayisi = karakterSay(metin); 
	for(j=0;j<karakterSayisi/2;j++){
		temp=metin[j];
		metin[j]=metin[karakterSayisi-1-j];
		metin[karakterSayisi-1-j]=temp;
	}
	return j;
}
void main(){
	char metin[100];
	int j=0;
	int temp;
	printf("Bir metin giriniz");
	gets(metin);
	karakterSay(metin); 
	tersiniBul(metin);
	puts(metin);
}


/*#include <stdio.h>
#include <stdlib.h>
int karakterSay(char metin[]){
	int i=0;
	while(metin[i]!='\0'){
		i++;
	}
	return i;
	
}
void main(){
	char metin[100];
	int j=0;
	int temp;
	printf("Bir metin giriniz");
	gets(metin);
	int karakterSayisi = karakterSay(metin); 
	
	for(j=0;j<karakterSayisi/2;j++){
		temp=metin[j];
		metin[j]=metin[karakterSayisi-1-j];
		metin[karakterSayisi-1-j]=temp;
	}
	puts(metin);
	
}*/

//Benim yazdýðým kod çalýþýyor
/*
#include <stdio.h>
int main(){
	char metin[100];
	int i=0;
	int j;
	int temp;
	printf("Bir metin giriniz: ");
	gets(metin);
	
	while(metin[i]!='\0'){
		i++;
	}
	
	for(j=0;j<i/2;j++){
		temp=metin[j];
		metin[j]=metin[i-j-1];
		metin[i-j-1]=temp;
	}
	puts(metin);
	
	
}

//Hocanýn paylaþtýðý
/*
#include <stdio.h>
#include <stdlib.h>
int KarakterSay(char metin[])
{
 int i=0;
 while(metin[i] != 0)
 i++;
 return i;
}
void main()
{
 char metin[100];
 int sayac=0;
 printf("Metin giriniz:");
 gets(metin);
 int karakterSayisi = KarakterSay(metin);
 for(sayac=karakterSayisi-1; sayac>=0; sayac--)
 putchar(metin[sayac]);
}
*/
