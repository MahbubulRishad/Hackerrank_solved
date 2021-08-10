#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,max_count=0,min_count=0,score[1000],maxi,mini;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&score[i]);
    }

    mini = maxi = score[0];
    for(i=0; i<n; i++)
    {
        if(score[i]>maxi)
        {
            max_count++;
            maxi = score[i];
        }

        if(score[i]<mini)
        {
            min_count++;
            mini = score[i];
        }
    }

    printf("%d %d",max_count,min_count);

    return 0;
}
