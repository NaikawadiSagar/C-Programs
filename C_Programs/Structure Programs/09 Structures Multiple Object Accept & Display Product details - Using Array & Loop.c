#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct product
{
    int P_Id;
    char P_Name[50];
    float P_price;
    float S_price;
};

int main()
{
    int i = 0;
    struct product Prod[3];

    for(i = 0;i < 3;i++)
    {
        printf("\n Enter %d Product Details => ",i+1);

        printf("\n\n Enter Product Id => ");
        scanf("%d",&Prod[i].P_Id);

        fflush(stdin);

        printf("\n Enter Product Name => ");
        gets(Prod[i].P_Name);

        printf("\n Enter Product Purchase Price => ");
        scanf("%f",&Prod[i].P_price);

        printf("\n Enter Product Selling Price => ");
        scanf("%f",&Prod[i].S_price);
    }
    getch();
    system("cls");

    for(i = 0;i < 3;i++)
    {
        printf("\n\n %d Display Product Details ",i+1);

        printf("\n\n Id : %d",Prod[i].P_Id);
        printf("\n\n Name : %s",Prod[i].P_Name);
        printf("\n\n Purchase Price : %0.2f",Prod[i].P_price);
        printf("\n\n Selling Price : %0.2f",Prod[i].S_price);
    }

    printf("\n==========*****==========");

    getch();
    return 0;

}
