#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,Ans = 0,i = 0;

    printf("\n Enter Two Numbers for Addition => ");
    scanf("%d%d",&No1,&No2);

    Ans = No1 + No2;

    printf("\n Addition is %d",Ans);

    getch();

    printf("\n");

    for(i = Ans; i >= 1;i--)
    {
        printf(" %d",i);
    }
    getch();
    return 0;
}
