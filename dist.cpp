
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,a1,b1;
    cin>>x1>>y1>>a1>>b1;
    int x,y,a,b;
    if(a1<b1){a =a1;b = b1;}
    else
        {a = b1;b = a1;}
    if(x1<y1){x =x1;y = y1;
    if(a<=x){
        if(b<=x){cout<<y-x;return 0;}
        if(b>=x && b<=y)
        {
            if(x-a+y-b<y-x){cout<<x-a+y-b;return 0;}
            else
                {cout<<y-x;return 0;}
        }
        if(b>=x && b>=y){
            if(x-a+b-y<y-x){cout<<x-a+b-y;return 0;}
            else
                {cout<<y-x;return 0;}
        }

    }
    if(a>=x && a<=y){
        if(b>=x && b<=y){
            cout<<y-x-(b-a);return 0;
        }
        if(b>=y){
            if(a-x+b-y<y-x){cout<<a-x+b-y;return 0;}
            else
                {cout<<y-x;return 0;}
        }
    }
    if(a>=x && a>=y){cout<<y-x;return 0;}
    }
    else
        {x = x1;y = y1;
            if(a<=y && b<=y){cout<<x-y;return 0;}
            if(a>=x){cout<<x-y;return 0;}
            if(a<=y && b>=y && b<=x){
            if(x-b+y-a<x-y){cout<<x-b+y-a;return 0;}
            else
                {cout<<x-y;return 0;}
            }
            if(a<=y && b>=x){
                if(b-x+y-a<x-y){cout<<b-x+y-a;return 0;}
                else
                    {cout<<x-y;return 0;}
            }
            if(a>=y && b<=x){
                cout<<x-b+a-y;return 0;
            }
            if(a>=y && a<=x && b>=x){
                if(b-x+a-y<x-y){cout<<b-x+a-y;return 0;}
                else
                    {cout<<x-y;return 0;}
            }
        }


    return 0;
}
