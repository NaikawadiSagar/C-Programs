#include<stdio.h>
#include<conio.h>

int main()
{
    int  no1 = 0 , no2 , i = 0 , res =1;

    printf("enter no => ");
    scanf("%d",&no1);


    printf("enter no => ");
    scanf("%d",&no2);

    for(i= 1 ; i <= no2 ; i++)
    {
        res = res * no1 ;
    }
    printf("%d",res);
}
