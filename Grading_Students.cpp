#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ar[500];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i++)
    {

        int tempdivide,tempnumber,finalnumber;
        tempdivide = ar[i] / 5;

        tempnumber = (tempdivide +1) * 5;

        if(tempnumber - ar[i] < 3)
        {
            finalnumber = tempnumber;
        }
        else
        {
            finalnumber = ar[i];
        }



        if (ar[i]<38)
        {
            finalnumber = ar[i];
        }

        printf("%d\n",finalnumber);

    }
    return 0;
}
