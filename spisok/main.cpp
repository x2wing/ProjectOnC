#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,mas[5][5];
    int *p=&mas[0][0];

    for(i=0;i<25;i++)
    {
        *(p+1)=5+i;

        cout<<" "<<*(p+1)<<endl;
    }
     cout<<" "<<p<<endl;
        cout<<" "<<p+1<<endl;
         cout<<" "<<p+2<<endl;
        cout<<" "<<p+3<<endl;

    return 0;
}
