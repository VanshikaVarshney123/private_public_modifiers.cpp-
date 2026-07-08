// writing code to learn private and public access modifiers 
#include <iostream>
using namespace std;

class employee {
    private : 
       int a , b, c ;
    public :
       int d , e ;
    void setData ( int a1, int b1, int c1);
    void getData (){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }
    };
    // DECLARATION 
    void employee::setData ( int a1, int b1, int c1){
        a = a1;
        b = b1;
        c = c1;
    }
int main() {
    employee radhu;
  //  radhu.a = 234;  ---> this will show error as 'a' is private. 
    radhu.d = 45;
    radhu.e = 460;
    radhu.setData( 1, 2, 4);
    radhu.getData ();
    return 0;
}