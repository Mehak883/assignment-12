// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void printN(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    printN(2 * num);
    return 0;
}
void printN(int n)
{
    int ans;
    if (n >= 1)
    {
        if (n % 2 != 0)
        {
            printf("%d ", n);
        }
        printN(n - 1);
    }
}