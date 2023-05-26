#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[40] = {};
    int Len = 0;

    printf("\n Enter A String => ");
    gets(cSrc);

    Len = strlen(cSrc);

    printf("\n length Of Given String  is %d",Len);

    getch();
    return 0;
}
