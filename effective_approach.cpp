#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int queries(vector<int> arr,int n,vector<int> q,int m)
{
    //int* output=new int[m]{0};
    int k=0;
    for(int i=0;i<m;i++)
    {
       k = k+(lower_bound(arr.begin(),arr.end(),q[i]) - arr.begin());
    }
    return k;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
   // int *arr = new int[n];
   vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    //int *q = new int[m];
    vector<int> q(m);
    for(int i=0;i<m;i++)
        cin>>q[i];
    int k=queries(arr,n,q,m);
    reverse(arr.begin(),arr.end());
    int t = queries(arr,n,q,m);
    cout<<k<<" "<<t;
}

