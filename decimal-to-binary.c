#include <stdio.h>
/*23.Write C code to convert a decimal number into 
binary without using an array*/
int main(){
	int n;
	int i=1;
	int bn=0;
	scanf("%d",&n);
	int dn=n;
	while(n>0){
		bn=bn+(n%2)*i;
		i*=10;
		n/=2;
	}
	printf("%d,%d",dn,bn);
}
