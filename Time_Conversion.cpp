#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh,mm,ss;
    char t[5];

    scanf("%d:%d:%d%s", &hh,&mm,&ss,&t);

    if(strcmp(t,"PM")==0 && hh!=12)
    {
        hh = 12 + hh;
    }

    if (strcmp(t, "AM")== 0 && hh==12)
    {
        hh = 0;
    }

    if(strcmp(t, "AM")== 0 && hh!=12)
    {
        hh = 0 + hh;
    }

    printf("%02d:%02d:%02d", hh,mm,ss);

    return 0;
}
