#include <stdio.h>
/*17.Write C code to display the n terms 
of harmonic series and their sum. 
(1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms)*/
int main(){
	float i;
	int n;
	float sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("1/%f \n",i);
		sum+=1/i;
	}
	printf("%f",sum);
}
