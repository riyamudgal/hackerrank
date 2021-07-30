/*
Sample Input

15
john
carmack
10
Sample Output

15
carmack, john
10

15,john,carmack,10
*/

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
    int age;
    string fname;
    string lname;
    int std;
    
    public:
    void setage(int s_age)
    {
        age=s_age;
    }
    void setfname(string s_fname)
    {
        fname=s_fname;
    }
    void setlname(string s_lname)
    {
        lname=s_lname;
    }
    void setstd(int s_std)
    {
        std=s_std;
    }
    
    int getage()
    {
        return age;
    }
    string getfname()
    {
        return fname;
    }
    string getlname()
    {
        return lname;
    }
    int getstd()
    {
        return std;
    }
  string to_string()
    {
      string ans=std::to_string(age)+","+fname+","+lname+","+std::to_string(std);
      return ans;
  }
};
int main() {
    int age, std;
    string fname,lname;
    
    cin>>age>>fname>>lname>>std;
    
    Student st;
    st.setage(age);
    st.setstd(std);
    st.setfname(fname);
    st.setlname(lname);
    
    cout<< st.getage()<<endl;
    cout<< st.getlname()<<", "<<st.getfname()<<endl;
    cout<< st.getstd()<<endl;
    cout<<endl;
    cout<<st.to_string(); 
    /*cout<<age<<","<<fname<<","<<lname<<","<<std;*/
    return 0;
}
