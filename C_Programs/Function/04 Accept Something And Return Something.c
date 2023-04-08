#include<stdio.h>
#include<conio.h>

int Add(int X,int Y)
{
    int Res = 0;

    printf("\n Enter Two Numbers For Addition => ");
    scanf("%d%d",&X,&Y);

    Res = X + Y;

    return Res;
}

int main()
{
    int N1 = 0,N2 = 0,Sum = 0;
    printf("\n Welcome To Main Function");

    Sum = Add(N1,N2);

    printf("\n Addition Of Two Numbers is = %d",Sum);

    getch();
    return 0;
}
