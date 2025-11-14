#include <stdio.h>
int sumof(int num)
{
    int r, r1 = 0;
    if (num == 0)
    {
        return 0;
    }
    return (num%10)+sumof(num/10);
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("Sum of digits: %d", sumof(num));
    return 0;
}
