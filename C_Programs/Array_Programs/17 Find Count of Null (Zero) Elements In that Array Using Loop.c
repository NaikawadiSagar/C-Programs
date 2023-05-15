#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[3] = { },i = 0,Z_cnt = 0;

    for(i = 0;i < 3;i++)
    {
        printf("\n Enter %d Element => ",i + 1);
        scanf("%d",&Arr[i]);
    }
    for(i = 0;i < 3;i++)
    {
        if(Arr[i] == 0)
        {
            Z_cnt++;
        }
    }
    printf("\n Zero Count In Given Array %d",Z_cnt);

    getch();
    return 0;

}
