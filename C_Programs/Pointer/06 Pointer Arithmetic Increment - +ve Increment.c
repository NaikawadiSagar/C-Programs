#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {43,56,23,45,55};
    int *Ptr = &Num;

    printf("\n Address Of Num = %d",Num);
    printf("\n Value in Pointer Is = %d",Ptr);
    printf("\n Value Where Pointer Pointing is = %d",*Ptr);

    getch();
    Ptr = Ptr+2;

    printf("\n\n Base Address of Ptr = %d",Ptr);
    printf("\n New value Where Pointer Pointing = %d",*Ptr);

    getch();
    return 0;
}
