#include<stdio.h>
#include<conio.h>

int Factorial(int Num)
{
    int Fact = 1;

    while(Num > 0)
    {
        Fact = Fact * Num;
        Num--;
    }
    return Fact;
}

int main()
{
    int No = 0,Ans = 0;

    printf("\n Enter Any Positive Integer Number => ");
    scanf("%d",&No);

    Ans = Factorial(No);

    printf("\n The Factorial Is Given Number Is = %d",Ans);

    getch();
    return 0;
}
