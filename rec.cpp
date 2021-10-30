#include<bits/stdc++.h>
using namespace std;
int main(){
int x1,y1,x2,y2;
int X1,Y1,X2,Y2;
cin>>x1>>y1>>x2>>y2;
cin>>X1>>Y1>>X2>>Y2;
int ax[4] = {x1,x2,X1,X2};
int ay[4] = {y1,y2,Y1,Y2};
sort(ax,ax+4);
sort(ay,ay+4);
if(ax[3]-ax[0]>ay[3]-ay[0])cout<<(ax[3]-ax[0])*(ax[3]-ax[0]);
else
cout<<(ay[3]-ay[0])*(ay[3]-ay[0]);

return 0;}
