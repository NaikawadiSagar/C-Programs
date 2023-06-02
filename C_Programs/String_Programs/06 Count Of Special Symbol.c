#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {};
    int Count = 0, i = 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 33 && cSrc[i] <= 64)
        {
            Count++;
        }
        i++;
    }
    printf("\n Special Count is = %d",Count);

    getch();
    return 0;
}
