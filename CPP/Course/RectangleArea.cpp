/*
Sample Input

10 5
Sample Output

10 5
50
Explanation

As, width=10  and height=5, so area=width*height=50

*/

#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    protected:
       int width;
       int height;
    
    public:
    void display() 
    {
        cout<<width<<" "<<height;
    }
};

class RectangleArea : public Rectangle {
        
        public:
        void read_input()
        {
            cin>>width>>height;
        }
        
        void display() 
        {
            cout<<endl<<width*height;
        }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
