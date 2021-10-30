#include<bits/stdc++.h>
using namespace std;
     int merge(int* parent, int x)
            {
                if (parent[x] == x)
                    return x;
                return merge(parent, parent[x]);
            }
        int connectedcomponents(int n, vector<vector<int> >& edges,int deg[])
        {
            vector<vector<int>>ss;
            int parent[n];
            for (int i = 0; i < n; i++) {
                parent[i] = i;
            }
            for (auto x : edges) {
                parent[merge(parent, x[0])] = merge(parent, x[1]);
            }
            int ans = 0;
            for (int i = 0; i < n; i++) {
                ans += (parent[i] == i);
            }
            for (int i = 0; i < n; i++) {
                parent[i] = merge(parent, parent[i]);
            }
            map<int, list<int> > m;
            for (int i = 0; i < n; i++) {
                m[parent[i]].push_back(i);
            }int snow=0;
            for (auto it = m.begin(); it != m.end(); it++) {
                list<int> l = it->second;
                vector<int>temp;
                int dc=0;
                for (auto x : l) {
                    temp.push_back(x);
                    if(deg[x]==1)dc++;
                }
                if(dc==temp.size()-1){snow++;
                ss.push_back(temp);}

            }
            vector<int>sub;
            map<int,int>ll;
            for(int p=0;p<ss.size();p++)
            {
                sub.push_back(ss[p].size());
                ll[ss[p].size()]++;
            }
            int aww=0;
            for( auto it = ll.begin(); it != ll.end(); ++it )
            {
               int value = it->second;
               if(value ==1)aww++;
            }
            return aww;
        }
int main()
{
    int n,e;
    cin>>n>>e;
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    vector<vector<int> > edg;
    for(int x=0;x<e;x++)
    {
        int n1,n2;
        cin>>n1>>n2;
        vector<int> e1 = { n1-1,n2-1};
        edg.push_back(e1);
        arr[n1-1][n2-1]=1;
        arr[n2-1][n1-1]=1;
    }
    int deg[n]={0};
    vector<set<int>>v;
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<n;y++)
        {
            if(arr[x][y]==1)
                deg[x]++;
        }
    }


        cout<<connectedcomponents(n, edg,deg);

    return 0;
}
