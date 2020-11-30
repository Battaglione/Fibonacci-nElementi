#include<stdio.h>
int main (void)
{
    int prec; 
    int succ;
    int att;
    int cont;
    cont=0;
    prec=0;
    att=1;
    succ=1;
    do
    {
        succ=prec+att;
        prec=att;
        att=succ;
        printf("\n%d",succ);
        cont=cont+1;
    } while (cont<10);
}
