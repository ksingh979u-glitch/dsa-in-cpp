#include<iostream>//this is inheritense example in this the properties of class car are inherited by class bike and we can access the properties of class car using object of class bike and also we can create object of class car and access its properties
//private members can only be accessed by using a function inside the class and public members can be accessed by using object of the class
using namespace std;
class car{
    private :
    float speed;
    public :
    string brand;
    string model;
    void display(string brand,string model,float speed){
        cout<<" brand is: "<<brand<<endl;
        cout<<" model is: "<<model<<endl;
        cout<<" speed is: "<<speed<<endl;
    }
    
    
};
class bike:public car{
    public:
    
};
int main(){
    bike b1;
    cout<<"for bike "<<endl;
    b1.brand="BMW";
    b1.model="2020";    
    b1.display(b1.brand,b1.model,120.5);
    car c1;
    cout<<"for car "<<endl;
    c1.brand="audi";
    c1.model="2022";
    c1.display(c1.brand,c1.model,100.0);


return 0;
}