#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill[5] = { },i = 0,Scnt = 0;

    for(i = 0;i < 5;i++)
    {
        printf("\n Enter %d Bills No => ",i + 1);
        scanf("%d",&Bill[i]);
    }
    for(i = 0;i < 5;i++)
    {
        if(Bill[i] == 7)
        {
            Scnt++;
        }
    }
    printf("\n Seven Count In Given Array is %d",Scnt);

    getch();
    return 0;

}
