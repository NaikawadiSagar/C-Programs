#include<stdio.h>
#include<conio.h>

int count  = 0;


struct product
{
    int p_id;
    char Name[20];
    float p_price;
};
int main()
{
    int i = 0;

    printf("\n How many Products Do You Have..? =>");
    scanf("%d",&count);

    struct product pobj[count];

    for(i = 0;i <= count;i++)
    {
        printf("\n Enter product Id =>");
        scanf("%d",&pobj[i].p_id);

        fflush(stdin);

        printf("\n Enter Product Name =>");
        gets(pobj[i].Name);

        printf("\n Enter Product Purchase Price => ");

        scanf("%f",&pobj[i].p_price);

    }
    printf("\n PREES ANY KEY TO CONTINUE ");
    getch();


    for(i = 0;i <= count;i++)
    {
        printf("\n\n\t ******Product Details Are******");

        printf("\n\t Product id = %d",pobj[i].p_id);
        printf("\n\t Product Name = %s",pobj[i].Name);
        printf("\n\t Product Purchase price = %0.2f",pobj[i].p_price);

    }

    getch();
    return 0;

}
