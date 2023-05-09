#include<stdio.h>
#include<conio.h>

int Add(int N1,int N2)
{
    int Sum = 0;

    Sum = N1 + N2;
    return Sum;
}

int main()
{
    int No1 = 0,No2 = 0;
    int Res = 0;

    printf("\n Enter Two Numbers For Addition => ");
    scanf("%d%d",&No1,&No2);

    Res = Add(No1,No2);

    printf("\n Addition is %d",Res);
    getch();
    return 0;
}
