
//3rd smallest element
#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int n, first= INT_MAX;
    cout<<"enter the size of array ";
    cin>>n;
   
    int arr[100];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //first smallest element
    for(int i=0;i<n;i++)
    {
        if(arr[i]<first)
        first=arr[i];
    }
    //find 2nd smallest element
    int second=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(first!=arr[i])
        second=min(second,arr[i]);
    }


    int third=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(first!=arr[i] && second!=arr[i])
        third=min(third,arr[i]);
    }
    cout<<third;
    
    
    return 0;
}
