#include<iostream>
using namespace std;
class Demo{
    private:
        int x;
    public:
        Demo(int a){
            x=a;
        }
        friend void printx(Demo obj);
};
void printx(Demo obj){
    cout<<"printing "<<obj.x<<endl;
}
int main(){
    Demo demo(10);
    printx(demo);
    return 0;
}