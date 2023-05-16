#include<stdio.h>
#include<conio.h>

void Display_All_Elements(int *Num,int Cnt)
{
    int i = 0;

    printf("\n Wellcome To Display Function ");
    getch();

    for(i = 0;i < 7;i++)
    {
        printf("\n %d Element is %d",i + 1,Num[i]);
    }
    return;
}

int main()
{
    int Arr[7] = {};

    printf("\n Wellcome To Main Function ");
    getch();

    Display_All_Elements(Arr,7);
    getch();
    return 0;
}
