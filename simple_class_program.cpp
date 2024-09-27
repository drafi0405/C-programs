#include<iostream>
using namespace std;
class rectangle{
    private:
        float len;
        float breath;
    public:
    rectangle(float l, float b){
        len = l;
        breath = b;
    }
    float area(){
        return len*breath;
    }
    float perimeter(){
        return 2*(len+breath);
    }
};
int main(){
    rectangle rec(2,4);
    cout<<"area "<<rec.area()<<endl;
    cout<<"perimeter "<<rec.perimeter()<<endl;
    return 0;
}