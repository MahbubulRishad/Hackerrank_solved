#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j=0,k,l,x,cnt=0,number=0;
    scanf("%d %d",&n,&m);
    int a[n],b[m],c[100];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    x=a[n-1];

    while(x<=b[0])
    {
        for(i=0; i<n; i++)
        {
            if(x%a[i]==0)
            {
                cnt=1;
            }
            else
            {
                cnt=0;
                break;
            }
        }


        if(cnt==1)
        {
            c[j]=x;
            j++;
        }
        x++;
    }

    for(i=0; i<j; i++)
    {
        for(k=0; k<m; k++)
        {
            if(b[k]%c[i]==0)
            {
                cnt=1;
            }
            else
            {
                cnt=0;
                break;
            }
        }

        if(cnt==1)
        {
            number++;
        }

    }

    printf("%d",number);

    return 0;
}
