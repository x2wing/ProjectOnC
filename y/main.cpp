#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{


char stroka[50]="obez dub makaka";
char tmp[10];
char s[50];
string h[10];
int i,q=0,m=0,ks;
ks=strlen(stroka);
for (i=0;i<=ks;i++)
{
if (stroka[i]!=' ')
{
tmp[q]=stroka[i];
//printf("%s\n",tmp);
q++;
}
else
{
h[m]=tmp;
i++;
q=0;
m++;
}
}
printf("%s",h[1]);//std::cout <<h[1]<<endl;

    return 0;
}
