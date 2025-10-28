#include<bits/stdc++.h>
using namespace std;
struct item

{
    double p,w,ratiO;

};

bool compare(item a,item b)

{
    return a.ratiO>b.ratiO;

}
int main()

{

    int n,maxc;

    cout<<"number of item and max capacity:";

    cin>>n>>maxc;

    item a[n];

    for(int i=0; i<n; i++)

    {

        cin>>a[i].p>>a[i].w;

        a[i].ratiO=a[i].p/a[i].w;

    }

    sort(a,a+n,compare);

    double weight=0;

    double profit=0.0;

    for(int i=0; i<n; i++)
    {

        if(weight+a[i].w <=maxc)
        {

            weight=weight+a[i].w;

            profit=profit+a[i].p;

        }

        else
        {

            double available_space=maxc-weight;

            profit=profit+a[i].p*available_space/a[i].w;

            break;

        }

    }

    cout<<"max profit "<<profit;

    return 0;

}
