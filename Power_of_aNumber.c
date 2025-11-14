#include <stdio.h>
int power(int x, int num)
{
    int result = 1;

    for (int i = 1; i <= x; i++)
    {
        result = result * num;
    }
    return result;
}
int main()
{
    int x, num;
    // enter power
    scanf("%d", &x);
    // enter number
    scanf("%d", &num);

    // power(x, num);
    printf("%d raised to the power of %d is %d", x,num,power(num,x));
    return 0;
}
