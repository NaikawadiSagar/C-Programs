#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 27;
    int *P = &No1;
    int **q = &P;
    int ***r = &q;
    int ****t = &r;
    int *****m = &t;

    printf("\n Value Of No1   = %d",No1);
    printf("\n Address of No1 = %d",&No1);

    printf("\n\n Address of P = %d",&P);
    printf("\n Address of q   = %d",&q);
    printf("\n Address of r   = %d",&r);
    printf("\n Address of t   = %d",&t);
    printf("\n Address of M   = %d",&m);
    getch();

     No1 = 21;

    printf("\n\n New Value of No1 = %d",No1);
    printf("\n value of *p        = %d",*P);
    printf("\n Value of P         = %d",P);
    printf("\n Value of **q       = %d",**q);
    printf("\n Value of **(&r)    = %d",**(&r));
    printf("\n value of ***(&r)   = %d",***(&r));
    printf("\n Value of **(&q)    = %d",**(&q));
    printf("\n Value of *****t    = %d",****t);

    getch();
    return 0;
}
