#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],temp,i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int total=0;
for (i = n-1; i >0; i--) {
  
    for (j = 0; j <i; j++) {           
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           
            total++;
        }
    }
   
}   
cout<<"Array is sorted in "<<total <<" swaps."<<endl;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1];
}
