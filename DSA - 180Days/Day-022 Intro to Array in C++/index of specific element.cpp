//Find the index of a specific element in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l;
    cout<<"Enter the Size of Array ";
    cin>>n;

    int arr[100]; 
    for( i=0;i<n;i++)
    cin>>arr[i]; 

    cout<<"Enter Element to find ";
    cin>>l;
    for(i=0;i<n;i++)
{
    if(l==arr[i])
    {
    cout<<i;
    return 0;
    }
    return 0;
}
 for(i=0;i<n;i++)
{
    if(l!=arr[i])
    {
     cout<<" -1 "; 
    return 0;
    }
}


}
