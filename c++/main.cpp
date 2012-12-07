/*лицензия запрещает любое использование кода в других проектах*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{

char str[] ="OBEZIAN This, a sample string.";
char * pch;
int i=0;
char* result[50];
char* slovo[50];
int a1,a2;
char* tmp;
int n,m;

  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    slovo[i]=pch;
    i++;
    pch = strtok (NULL, " ,.-");
  }

for (m=0; m<i-1;m++)
    for (n=0;n<i-m-1;n++)
        {
        a1=strlen(slovo[n]);
        a2=strlen(slovo[n+1]);
        if (a1<a2)
            {
                tmp=slovo[n]; slovo[n]=slovo[n+1]; slovo[n+1]=tmp;
            }


        }
for (int n=i;n>=0;n--)
    cout<<n<<" "<<slovo[n]<<endl;
cin>>i;


return 0;
}
