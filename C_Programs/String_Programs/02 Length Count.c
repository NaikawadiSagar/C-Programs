#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[90] = {'\0'};
    int Lcnt = 0,i = 0;

    printf("\n Enter a String => ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        Lcnt++;
        i++;
    }
    printf("\n Length Is %d",Lcnt);

    getch();
    return 0;
}
