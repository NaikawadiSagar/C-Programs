#include<stdio.h>
#include<conio.h>

int main()
{
    int No[6] = {54,45,56,78,79,34};
    int *Ptr = &No[4];

    printf("\n Address Of No = %d",No);
    printf("\n Value Of Ptr = %d",Ptr);
    printf("\n Value Where pointer is Pointing = %d",*Ptr);

    getch();
    Ptr = Ptr - 2;

    printf("\n\n Base Address Of Ptr = %d",Ptr);
    printf("\n New Value Where Pointer is Pointing = %d",*Ptr);

    getch();
    return 0;
}
