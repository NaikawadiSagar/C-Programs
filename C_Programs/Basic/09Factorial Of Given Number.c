#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 5,fact = 1;

    while(No > 0)
    {
        fact = No*fact;
        No--;
    }
    printf("\n Factorial is %d",fact);

    getch();
    return 0;
}
