#include <stdio.h>
int main()
{
    int n, c, i, m;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &n, &c);
    printf("Prime numbers between %d and %d are: ", n, c);
    while (n < c)
    {
        m = 0;
        for(i = 2; i <= n/2; ++i)
        {
            if(n % i == 0)
            {
                m= 1;
                break;
            }
        }
        if (m== 0)
            printf("%d ", n);
        ++n;
    }
    return 0;
}
