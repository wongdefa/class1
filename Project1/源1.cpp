#include<stdio.h>
#define num 8
int main()
{
    int a[num] = { -1,-2,-3,-10,-4,7,-2,-5 };
    int max = a[0];
    for (int i = 0; i < num; i++)
    {
        int sum = a[i];
        int max1 = a[i];
        for (int j = i + 1; j < num; j++)
        {
            sum = a[j] + sum;
            if (sum > max1)
            {
                max1 = sum;
            }
        }
        if (max1 > max)
        {
            max = max1;
        }
    }
    printf("max = %d\n", max);
    return 0;
}