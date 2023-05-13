#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[2],i = 0,O_cnt = 0;

    for(i = 0;i < 2;i++)
    {
        printf("\n Enter %d Elements => ",i + 1);
        scanf("%d",&Arr[i]);
    }
    for(i = 0;i < 2;i++)
    {
        if(Arr[i] % 2 == 1)
        {
            O_cnt++;
        }
    }
    printf("\n Odd Count In Given Array is %d",O_cnt);

    getch();
    return 0;
}
