/*
This code will print:
I am an isosceles triangle
I am a triangle

Now write a function in Isosceles class such that the output is as given below.


Sample Output
I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
       void description() 
       { 
          cout<<"In an isosceles triangle two sides are equal"<<endl;
       }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}
