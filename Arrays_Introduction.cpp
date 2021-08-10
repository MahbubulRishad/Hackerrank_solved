#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[1000],n,i;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for (i= (n - 1); i>=0; i--)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
