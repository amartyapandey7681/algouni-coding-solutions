#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int pl[n],ps[n];
    int al[m],as[m];
    for(int x=0;x<n;x++)
    {
        cin>>pl[x]>>ps[x];
    }
    for(int x=0;x<m;x++){
        cin>>al[x]>>as[x];
    }
    int p=0,a=0;int max1=0;
    for(int x=1;x<=100;x++)
    {
        if(as[a]>ps[p] && as[a]-ps[p]>max1)max1=as[a]-ps[p];
        pl[p]--;al[a]--;
        if(pl[p]==0)p++;
        if(al[a]==0)a++;
    }
    cout<<max1<<endl;
    return 0;
}
