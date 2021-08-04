/*
Sample Input
23,4,56

Sample Output
23
4
56
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;



int main() {
    string str;
    cin>>str;
for (int i=0;i<str.size();i++)
{
    if (str[i]!=',')
        cout<<str[i];
    else
        cout<<endl;    
}
    return 0;
}
