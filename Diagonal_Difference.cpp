#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,fsum = 0, ssum = 0,dsum,ar[100][100];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i==j)
            {
                fsum = fsum + ar[i][j];
            }

            if(j==((n-1) - i))
            {
                ssum = ssum + ar[i][j];
            }
        }
    }


    dsum = abs(fsum - ssum);
    printf("%d\n", dsum);

    return 0;
}
