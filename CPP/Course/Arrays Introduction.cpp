/*
Sample Input
4
1 4 3 2

Sample Output
2 3 4 1
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

int size;
cin>>size;
int arr[size]; 
for (int i=0;i<size; i++)
{
    cin>>arr[i];
}
for (int i=size-1;i>=0; i--)
{
    cout<<arr[i]<<" ";
}
return 0;
}