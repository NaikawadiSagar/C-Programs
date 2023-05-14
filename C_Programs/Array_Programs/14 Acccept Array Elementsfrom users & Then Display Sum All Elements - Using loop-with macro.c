#include<stdio.h>
#include<conio.h>
#include<malloc.h>

int main()
{
    int i = 0,Bill_Sum = 0,count = 0;
    int *Bills_ptr = NULL;

    printf("\n Enter How Many Billes Do you have => ");
    scanf("%d",&count);

    Bills_ptr = (int*)malloc(count * sizeof(int));

    for(i = 0;i < count;i++)
    {
        printf("\n Enter Bill No %d => ",i + 1);
        scanf("%d",&Bills_ptr[i]);

        Bill_Sum = Bill_Sum + Bills_ptr[i];
    }

    for(i = 0;i < count;i++)
    {
        printf("\n Amount in bill No %d",Bills_ptr[i]);
    }

    printf("\n\n Total Amount Received Today %d",Bill_Sum);

    getch();
    return 0;
}
