#include<stdio.h>
/*14.Write C code to print all 
Strong numbers between 1 to n.*/
int main()
{
    int i, j, cur, lastDigit, n;
    long long fact, sum;
    scanf("%d", &n);
    printf("All Strong numbers between 1 to %d are:\n", n);
    for(i=1; i<=n; i++)
    {
        cur = i;
        sum = 0;
        while(cur > 0)
        {
            fact = 1ll;
            lastDigit = cur % 10;
            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            cur /= 10;
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
