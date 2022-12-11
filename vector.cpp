#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
    int mul=1;
    for(int i=0;i<n;i++)
    {
        mul*=v[i];
    }
    cout<<mul<<endl;
    return 0;
}
