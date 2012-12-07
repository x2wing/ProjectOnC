#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#define e 1e-7

using namespace std;

int main()
{
    long double x=0,N,x0,xk,h,u=0,d,y=0,yk=0,delta;
    int i=1,j,n=1,f=1;
    printf("Vvedite x0\n");
    cin>>x0;
     printf("Vvedite xk\n");
    cin>>xk;
     printf("Vvedite h\n");
    cin>>h;

    //x0=0.091;
    //xk=1;
    //h=0.01;

    N=(xk-x0)/h+1;
    for (j=0;j<=N;j+=1)
    {

    x=x0+j*h;
    if((x>=0) && (x<=1))
    {
        u=-x*log(x);
        yk=1/pow(x,x);
        y=1+u;

    while (fabsl(u)>=e)
    {
       f=f*(i+1);
       u=(pow(-1,i+1)*u*u)/f;
       y=y+u;
       i++;
       n++;
    }
    //printf("%d\t%.5Lf\t%d\t%.5Lf\t%.5Lf\n",j,x,n,y,fabsl(y-yk));
    delta=fabsl(y-yk);
    cout<<j<<'\t'<<x<<'\t'<<n<<'\t'<<y<<'\t'<<delta<<endl;
    }
    else
        {
        printf("error");
    continue;
    }
    i=1;n=1;f=1;
    }
    return 0;
    }
