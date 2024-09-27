#include<iostream>
using namespace std;
class Example{
    public:
        static int count;
        static void fun() { 
            std::cout << "count" <<count<< std::endl;
        }
};
int Example::count=10;
int main(){
    Example::count = 20;
    Example::fun();
    return 0;
}