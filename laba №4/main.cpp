#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{

string stroka;
string tmp;
string min;

string h[10];
int i,q=1,m=0,e;
printf("vvedite stroky\n");
getline(cin, stroka);
char s1;
tmp=' ';
for (i=0;i<stroka.length();i++)
{
    s1=stroka.at(i);
if (s1==' ')
    {
    q++;
    tmp=' ';
    }
else
{
   tmp=tmp+s1;
   h[q]=tmp;
}
}

for (i=1;i<=q;i++)
    for (e=1;e<=q;e++)
{
    if (h[i].length()<h[e].length())
    {
    min=h[e];
    h[e]=h[i];
    h[i]=min;
    }

}
for (i=1;i<=q;i++)
{
    std::cout<<h[i];
}
    return 0;
}
