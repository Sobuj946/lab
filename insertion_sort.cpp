#include<bits/stdc++.h>
using namespace std;
void insertion(vector<int>v)
{
    for(int i=1;i<v.size();i++)
    {
        int temp=v[i];
        int j=i-1;
        while(j>=0&&v[i]>temp)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=temp;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    insertion(v);
    //  for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}