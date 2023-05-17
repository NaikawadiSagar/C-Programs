#include<stdio.h>
#include<conio.h>

void Accept_Elements(int *Num,int Cnt)
{
    int i = 0;

    for(i = 0;i < 7;i++)
    {
        printf("\n Enter %d Element => ",i + 1);
        scanf("%d",&Num[i]);
    }

}
void Display_All_Elements(int *No,int Tmp)
{
    int i = 0;

    for(i = 0;i < 7;i++)
    {
        printf("\n %d Element is = %d ",i + 1,No[i]);
    }
}

int main()
{
    int Arr[7] = {};

    Accept_Elements(Arr,7);
    Display_All_Elements(Arr,7);

    getch();
    return 0;
}
