#include<stdio.h>
#include<conio.h>

void Add(int X,int Y)
{

    int Res = 0;

    printf("\n Enter Two Numbers For Addition => ");
    scanf("%d%d",&X,&Y);

    Res = X + Y;

    printf("\n Addition of %d And %d = %d",X,Y,Res);

    return;
}
int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Welcome To Main Function ");

    Add(No1,No2);

    getch();
    return 0;
}
