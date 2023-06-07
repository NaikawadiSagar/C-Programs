#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {};
    int i = 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            cSrc[i] = cSrc[i] - 32;
        }
        i++;
    }
    printf("\n Special Count is = %s",cSrc);

    getch();
    return 0;
}
