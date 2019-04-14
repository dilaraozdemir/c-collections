/* Multiplication table with recursion */
#include <stdio.h>
int table(int x){
	int i;
	if(x<=10){
		for(i=1; i<=10 ;i++){
			printf("%-3d",x*i);
		}
    	printf("\n");
    	return table(x+1);
	}
	else
		return 1;
}
int main(){
   int x=1;
   table(x);
}
