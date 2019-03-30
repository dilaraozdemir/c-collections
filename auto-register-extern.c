#include <stdio.h>
int x;
void auto_depolama_sinifi(){
	printf("auto sinifi calistiriliyor\n");
	auto int a =32;
	printf("auto olarak tanimlanan 'a' degiskeninin degeri: %d\n", a);
	printf("---------------------");
	
}
void register_depolama_sinifi(){
	printf("\nregister sinifi calistiriliyor\n");
	auto char b = 'G';
	printf("register olarak tanimlanan 'b' degiskeninin degeri: %d\n", b);
	printf("---------------------");
}
void extern_depolama_sinifi(){
	printf("\nextern sinifi calistiriliyor\n");
	extern int x;
	printf("extern olarak tanimlanan 'x' degiskeninin degeri: %d\n", x);
	x = 2;
	printf("extern olarak tanimlanan ve modifiye edilen 'x' degiskeninin degeri: %d", x);
	
}
void static_siniflandirma_sinifi(){
	int i = 0;
	printf("\nstatic sinifi calistiriliyor\n");
	printf("\nDongu basladi\n");
	for(i=1;i<5;i++){
		static int y = 5;
		int p = 10;
		y++;
		p++;
		printf("y degeri: %d\n",y);
		printf("p degeri: %d\n",p);
		printf("---------------------");
	}
}
main(){
	auto_depolama_sinifi();
	register_depolama_sinifi();
	extern_depolama_sinifi();
	static_siniflandirma_sinifi();
}
