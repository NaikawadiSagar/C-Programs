#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[4] = { },i = 0,Max = 0;

    for(i = 0;i < 4;i++)
    {
        printf("\n Enter %d Element => ",i + 1);
        scanf("%d",&Arr[i]);
    }
    for(i = 0;i < 4;i++)
    {
        if(Arr[i] > Max);
        {
            Max = Arr[i];
        }
    }
    printf("\n Maximum Number is %d",Max);

    getch();
    return 0;
}
