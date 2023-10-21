#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    char cSrc[50]={},Temp = 0;
    int i,j;
    
    printf("\n Enter A String ");
    gets(cSrc);
    
    while(cSrc[i] !='\0')
    {
      i++;
    }
    i--;
    
    while(i > j)
    {
      if(cSrc[i] != '\0')
      {
        break;
      }
      
      i--;
      j++;
    }
    
    if(i<=j)
    {
      printf("\n Given String %s is palindrome",cSrc);
    }
    else
    {
      printf("\n Given String %s is palindrome",cSrc);
    }


    getch();
    return 0;
}