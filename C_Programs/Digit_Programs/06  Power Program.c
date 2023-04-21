#include<stdio.h>
#include<conio.h>

int main()
{
    int Pow = 1,Base = 0,Expo = 0,i = 0;

    UP:
    printf("\n Enter A Base => ");
    scanf("%d",&Base);

    printf("\n Enter A Exponant => ");
    scanf("%d",&Expo);

    if(Base <= 0 || Expo <= 0)
    {
        printf("\n Enter Valid Numbers ");

        goto UP;
    }

    while(i < Expo)
    {
        Pow = Pow * Base;
        i++;
    }
    printf("\n Power of %d ^ %d is = %d",Base,Expo,Pow);
    getch();
    return 0;
}
