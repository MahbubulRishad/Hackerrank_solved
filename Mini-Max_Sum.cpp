#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ar[100],n=5,i,mini,maxi=0,sum=0;

    for(i=0; i<n; i++)
    {
        scanf("%lld",&ar[i]);
        sum = sum + ar[i];
    }
   mini = ar[0];

    for(i=0; i<n; i++)
    {
        if(ar[i]>maxi)
        {
            maxi = ar[i];
        }

        if (ar[i]<mini)
        {
            mini = ar[i];
        }
    }
    printf("%lld %lld",sum-maxi, sum-mini);

    return 0;
}


