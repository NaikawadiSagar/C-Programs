#include<stdio.h>
#include<conio.h>

struct product
{
    int P_Id;
    char P_Name[40];
    float P_Price;
    float S_price;
};

int main()
{
    struct product Pobj[3];
    int i = 0;

    for(i = 0;i < 3;i++)
    {
        printf("\n %d Enter Product Details",i + 1);
        printf("\n\n Enter Product Id -> ");
        scanf("%d",&Pobj[i].P_Id);

        fflush(stdin);

        printf("\n Enter Product Name -> ");
        gets(Pobj[i].P_Name);

        printf("\n Enter Product Purchase price -> ");
        scanf("%f",&Pobj[i].P_Price);

        printf("\n Enter Product Selling Price -> ");
        scanf("%f",&Pobj[i].S_price);
    }

    printf("\n ******Display Product Details******");

    for(i = 0;i < 3;i++)
    {
        printf("\n\n Product Id => %d",Pobj[i].P_Id);
        printf("\n Product Name => %s ",Pobj[i].P_Name);
        printf("\n Product Purchase Price => %0.2f",Pobj[i].P_Price);
        printf("\n Product Selling Price => %0.2f",Pobj[i].S_price);
    }
    getch();
    return 0;
}
