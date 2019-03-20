/*Klavyeden -1 girilene kadar girilen tam kare sayýlarýn (4,9,25 gibi) toplamýný bulup ekrana
yazdýran algoritmanýn akýþ diyagramýný çiziniz.*/
#include <stdio.h>
#include <conio.h>
int main(){
	int i;
	int a;
	int sum=0;
	int kontrol;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&a);
	while(a!=-1){
		for(i=0;i<=a;i++){
			kontrol = i * i;
			if(kontrol==a){
				sum = sum + a;
				printf("%dnin karesi = %d\n",i,a);
			}
		}
		scanf("%d",&a);
	}
	printf("%d",sum);
}
/*#include <stdio.h>
#include <conio.h>
 
//Tam Kare Sayýlar
 
 
int main(){
    
    int tamKare, adet;
    
    printf("Kac Adet Sayi Gosterilsin: ");
    scanf("%d", &adet);    
 
    for(int i=1; i<=adet; i++) { 
        
        tamKare = i * i;
        printf("%d*%d= %d\n", i, i, tamKare);        
    
    }    
 
    getch();
    return 0;    
}*/
/*int main(){
    
    int sayi, kontrol;
    
    printf("Sayi Giriniz: ");
    scanf("%d", &sayi);    
 
    for(int i=0; i<=sayi; i++) { 
        
        kontrol = i * i;
        
        if( kontrol == sayi ){
            printf("Girilen sayi tam karedir (%d*%d= %d)", i, i, kontrol);
            break;
        }
        
        if ( kontrol > sayi){  //Kontrol sayýdan büyükse iþlemciyi yormamak için döngüyü durduruyoruz
            printf("Girilen Sayi tam kare degildir");
            break;         
        }    
    
    }    
 
    getch();
    return 0;    
}*/
