//Calculate the average of elements in an array of size 18.

//AVERAGE 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[18];
      int ans=0,size=0; //to store sum value
    
    for(int i=0;i<18;i++)
    {
    cin>>arr[i];    
    ans=ans+arr[i];
    }
size=sizeof(arr)/sizeof(arr[0]);

    cout<<ans/size;
return 0;
}


  
