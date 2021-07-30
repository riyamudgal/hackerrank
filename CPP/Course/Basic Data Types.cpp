/*
Printing
To print a data type, use the following syntax:

printf("`format_specifier`", val)
For example, to print a character followed by a double:

char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);
Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.
Sample Input
3 12345678912345 a 334.23 14049.30493

Sample Output
3
12345678912345
a
334.230
14049.304930000
*/



#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a; 
    long long b; 
    char c; 
    float d; 
    double e;
    cin>>a>>b>>c>>d>>e;
    
    cout<<a<<endl<<b<<endl<<c<<endl;
    printf("%.3f\n%.9lf",d,e);
    /*cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;
    
    cout<<a<<endl<<b<<endl<<c<<endl;
    printf("%.f\n", f); 
    printf("%.lf", z);*/
    return 0;
}
