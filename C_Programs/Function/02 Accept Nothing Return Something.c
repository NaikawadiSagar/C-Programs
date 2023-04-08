#include<stdio.h>
#include<conio.h>

int Add()
{
    int No1 = 0,No2 = 0,Sum = 0;

    printf("\n Enter 1st Number => ");
    scanf("%d",&No1);//5

    printf("\n Enter 2nd Number => ");
    scanf("%d",&No2);//5

    Sum = No1 + No2;

    return Sum;
}
int main()
{
    int Res = 0;



    printf("\n Addition is %d.",Res = Add());
    getch();
    return 0;
}
