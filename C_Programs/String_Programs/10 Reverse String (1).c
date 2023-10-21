#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    char cSrc[50] = {},cDest[50] = {};
    int i = 0,j = 0;
    
    printf("\n Enter The String => ");
    gets(cSrc);
    
    while(cSrc[i] !='\0')
    {
      i++;
    }
    i--;
    while(i >= 0)
    {
      cDest[j] = cSrc[i];
      i--;
      j++;
    }
    printf("\n Original String is %s",cSrc);
    printf("\n Reverse String is %s.",cDest);
    
    getch();
    return 0;
}