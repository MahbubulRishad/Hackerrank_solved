#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n,apple[100000],orange[100000],i,a_cnt=0,o_cnt=0,apple_sum,orange_sum=0;

    scanf("%d%d", &s,&t);

    scanf("%d%d", &a,&b);

    scanf("%d%d", &m,&n);

    for(i=0; i<m; i++)
    {
        scanf("%d",&apple[i]);


        if((a+apple[i])>=s && (a+apple[i])<=t)
        {
            a_cnt++;
        }
    }

    for(i=0; i<n; i++)
    {
        scanf("%d",&orange[i]);
        if((b+orange[i])>=s && (b+orange[i])<=t)
        {
            o_cnt++;
        }
    }


    printf("%d\n%d",a_cnt,o_cnt);

    return 0;
}


