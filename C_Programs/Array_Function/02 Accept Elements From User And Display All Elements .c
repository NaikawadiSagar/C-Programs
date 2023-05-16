#include<stdio.h>
#include<conio.h>

int i = 0;

void Accept_Element(int *Ptr,int Temp)
{
    for(i = 0;i < Temp;i++)
    {
        printf("\n Enter %d Element =>",i + 1);
        scanf("%d",&Ptr[i]);
    }
}


void Display_Element(int *Aptr,int Cnt)
{
    for(i = 0;i < Cnt;i++)
    {
        printf("\n\t %d Element is = %d",i + 1,Aptr[i]);
    }
}

int main()
{
    int No[5] = {12,34,56,45,45};

    printf("\n ==============Welcome==============\n");

    Accept_Element(No,5);

    Display_Element(No,5);

    printf("\n\n ==============Thank You==============\n");

    getch();
    return 0;
}
