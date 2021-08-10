#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[10000],i,sum = 0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);

        sum = sum + ar[i];
    }
    printf("%d\n",sum);

    return 0;
}
