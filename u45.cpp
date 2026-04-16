#include<iostream>
using namespace std;
template<typename T>
class sum{
    public :
  

    T add(T a, T b){
        
        return a+b;
    }   


};
int main(){
    sum<int> obj1;
    cout<<"the sum in integer is = "<<obj1.add(2,3)<<endl;
    sum<float> obj2;
    cout<<"the sum in float is = "<<obj2.add(2.5,3.5)<<endl;
    sum<double> obj3;
    cout<<"the sum in double is = "<<obj3.add(2.59459894,3.549494)<<endl;



return 0;
}