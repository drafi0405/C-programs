#include<iostream>
using namespace std;
int main(){
    int isPrime = true;
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    if(num <= 1){
        isPrime = false;
    }else{
        for(int i=2; i<=num/2; ++i){
            if(num%i == 0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<num<<" is prime"<<endl;
    }else{
        cout<<num<<" is not prime"<<endl;
    }
    return 0;
}