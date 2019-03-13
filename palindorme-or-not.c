#include <stdio.h>
int main(){
	/*23.Write C code to check whether
	a number is palindrome or not.*/
   	int n;
   	int r = 0;
   	int t;
 
   	printf("Enter a number: ");
	scanf("%d", &n);
	t = n;
   	while (t!=0)
   	{
      r = r * 10;
      r = r + t%10;
      t = t / 10;
   	}
 
   	if (n == r)
      printf("%d is a palindrome number.\n", n);
   	else
      printf("%d isn't a palindrome number.\n", n);
 
   return 0;
}
