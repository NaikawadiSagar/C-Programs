#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 61;
    int *ptr = &No;

    printf("\n Value Of No = > %d",No);
    printf("\n Address of No = > %d",&No);
    printf("\n Value of *Ptr = > %d",*ptr);
    printf("\n Value of Ptr = > %d",ptr);

    getch();
    return 0;
}
