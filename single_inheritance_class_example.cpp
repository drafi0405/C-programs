#include<iostream>
using namespace std;
class base{
    public:
        void base_func(){
            cout<<"base funcion"<<endl;
        }
};
class derived:public base{
    public:
        void derived_func(){
            cout<<"derived function"<<endl;
        }
};
int main(){
    derived dclass;
    dclass.base_func();
    dclass.derived_func();
    return 0;
}