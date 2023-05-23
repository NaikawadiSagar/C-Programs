#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5] = {21,34,65,78,76};
    int *Ptr = &Arr;

    printf("\n Base Address Of Arr = %d ",Arr);
    printf("\n Value in Pointer is = %d",Ptr);
    printf("\n Value Where Pointer Pointing = %d",*Ptr);

    Ptr++;

            /// Ptr++;  => ptr +(size of(<Datatype of Ptr>)*1);
            ///         => 2032 + (size of(int)*1)
            ///         => 2032 + (4*1);
            ///         => 2032 + 4;
            ///         => 2036;

    getch();

    printf("\n\n New Address Of Ptr = %d",Ptr);
    printf("\n Value Where Pointer Pointing = %d",*Ptr);

    getch();
    return 0;
}
