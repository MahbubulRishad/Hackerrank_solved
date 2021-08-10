#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,ar[1000];
    double positive = 0,negative = 0,zero = 0,rp,rn,rz;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for(i=0; i<n; i++)
    {
        if(ar[i]>0)
        {
            positive++;
        }
        else if (ar[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    rp = positive / n;
    rn = negative / n;
    rz = zero / n;

    printf("%.6lf\n", rp);
    printf("%.6lf\n", rn);
    printf("%.6lf\n", rz);

    return 0;
}
