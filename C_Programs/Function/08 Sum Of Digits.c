#include<stdio.h>
#include<conio.h>

int Calculate_Sum()
{
    int Ans = 0,Dig = 0,No = 0,Temp = 0;

    printf("\n Enter Any Positive Integer Number => ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Ans = Ans + Dig;
        Temp = Temp / 10;
    }
    return Ans;
}

int main()
{
    int Sum = 0;
    Sum = Calculate_Sum();

    printf("\n Addition Of Given Number is => %d",Sum);
}
