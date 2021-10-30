#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[1]-arr[0]==1 && arr[2]-arr[1]==1){cout<<0<<endl;
    cout<<0<<endl;return 0;}
    if(arr[1]-arr[0]==2 || arr[2]-arr[1]==2)
        cout<<1<<endl;
    else
        cout<<2<<endl;
    if(arr[1]-arr[0]>arr[2]-arr[1])
        cout<<arr[1]-arr[0]-1<<endl;
    else
        cout<<arr[2]-arr[1]-1<<endl;
    return 0;
}
