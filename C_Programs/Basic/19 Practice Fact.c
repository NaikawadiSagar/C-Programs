#include<stdio.h>
#include<conio.h>

void Factorial()
{
    int No = 0,Fact = 1;

    printf("\n Enter Any Number => ");
    scanf("%d",&No);

    while(No > 0)
    {
        Fact = Fact * No;
        No--;
    }
    printf("\n Factorial Number Is %d",Fact);}

int main()
{
    Factorial();

    getch();
    return 0;
}
