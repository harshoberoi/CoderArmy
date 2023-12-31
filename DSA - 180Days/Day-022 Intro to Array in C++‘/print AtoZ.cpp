//Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char name[26];
    for(i=100;i<126;i++)
    {
        name[i-100]=i-3;
        cout<<name[i-100]<<" ";
    }
    return 0;
}
