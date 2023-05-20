#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;
    int *Ptr1 = &No1;
    int *Ptr2 = &No1;

    printf("\n Enter Value Of No1 => ");
    scanf("%d",&No1);

    printf("\n Enter Value Of No2 => ");
    scanf("%d",&No2);

    printf("\n Value Of No1   = %d.",No1);
    printf("\n Address of No1 = %d",&No1);

    printf("\n\n Value Of Ptr = %d",Ptr1);
    printf("\n Address Of Ptr = %d",&Ptr1);

    printf("\n\n Value Of *Ptr  = %d",*Ptr1);
    printf("\n Value Of No2 = %d.",No2);

    printf("\n\n Address of No2 = %d",&No2);
    printf("\n Value Of Ptr = %d",Ptr2);

    printf("\n\n Address Of Ptr = %d",&Ptr2);
    printf("\n Value Of *Ptr  = %d",*Ptr2);

    printf("\n Value Of pointer %d",&(*Ptr1));

    getch();
    return 0;
}
