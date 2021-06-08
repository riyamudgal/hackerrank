#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 int n,i,j;
    cin>>n;
     
    for(i=0;i<n;i++) 
    {
        string str;
        cin>>str;

        for(j=0;j<str.length();j++) 
        {
            if(j%2==0)
            {
                cout<<str[j];
            }
        }
cout << " ";
        for(j=0;j<str.length();j++) 
        {
            if (j%2 !=0)
            {
                cout<<str[j];
            }
        }
        cout<<endl;
    }

    return 0;
}
