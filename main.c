#include <stdio.h>
#include <stdlib.h>

double aftercomma(double x)
{
    printf("start aftercomma: %lf\n", x);
    double y=x;
    x=(int)x;
    y=y-(double)x;
    return y;

}

double twozeros(double x)
{
    printf("start twozeros: %lf\n", x);
    double y=x;
    x*=100;
    y*=100;
    x=(int)x;
    y=y-(double)x;
    y/=100;
    return y;

}

double anyzeros(double x,int a)
{
    printf("start anyzeros: %lf\n", x);
    int multiplier=1;

    for(int i=0; i<a;++i)
    {
        multiplier=multiplier*10;
    }
    x*=multiplier;
    x=(int)x;
    x=(double)x;
    x/=multiplier;
    return x;

}

int main()
{
    double x,save;
    int a;
    printf("Podaj swoja liczbe: ");
    scanf("%lf", &x);
    printf("Podaj swoja liczbe miejsc znaczacych: ");
    scanf("%d", &a);
    printf("Podana liczba bez calkowitych to; %lf\n",aftercomma(x));
    printf("Podana liczba bez calkowitych oraz dwoch miejsc po zerze to; %lf\n",twozeros(x));
    printf("Podana liczba z wybranymi miejscami znaczacymi to; %lf\n",anyzeros(x,a));
    return 0;

}
