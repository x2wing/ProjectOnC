#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
char str[23];
char * pch;
int i=0;
char* slovo[50];
int a1,a2;
char* tmp;
int n,m;
printf("safaf");
gets(str);
  pch = strtok (str," ");
  while (pch != NULL)
  {
    slovo[i]=pch;
    i++;
    pch = strtok (NULL, " ");
  }
for (m=0; m<i-1; m++)
    for (n=0; n<i-m-1; n++)
        {
        a1=strlen(slovo[n]);
        a2=strlen(slovo[n+1]);
        if (a1<a2)
            {
                tmp=slovo[n]; slovo[n]=slovo[n+1]; slovo[n+1]=tmp;
            }
        }
for (int n=1;n<=i;n++)
    cout<<" "<<slovo[n];
getch();
return 0;
}
