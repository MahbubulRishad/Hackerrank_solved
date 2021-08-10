#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,i,cnt=0,ar[1000000],maxi=0;

    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);

        if(ar[i]>maxi)
        {
            maxi = ar[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(ar[i] == maxi)
        {
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}
