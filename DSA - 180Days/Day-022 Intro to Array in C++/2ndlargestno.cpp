
//2nd largest element
#include<bits/stdc++.h>
using namespace std;
int main()
{      
    int n, ans= INT_MIN;
    cout<<"enter the size of array ";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //first largest element
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    //find 2nd largest element
    int second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ans!=arr[i])
        second=max(second,arr[i]);
    }
    cout<<second;
    return 0;
}
