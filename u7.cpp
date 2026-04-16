#include<iostream>
using namespace std;

class person{
private:
    string name;
    int age;

public:
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class student : public person{
private:
    int rollno;
    string collname;

public:
    void input(){
        person::input();
        cout<<"Enter rollno: ";
        cin>>rollno;
        cout<<"Enter college name: ";
        cin>>collname;
    }

    void display(){
        person::display();
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"College: "<<collname<<endl;
    }
};

class teacher: public person{
private:
    int empid;
    string dept;

public:
    void input(){
        person::input();
        cout<<"Enter empid: ";
        cin>>empid;
        cout<<"Enter dept: ";
        cin>>dept;
    }

    void display(){
        person::display();
        cout<<"Empid: "<<empid<<endl;
        cout<<"Dept: "<<dept<<endl;
    }
};

int main(){
    student s;
    teacher t;

    cout<<"Student: "<<endl;
    s.input();
    s.display();

    cout<<"Teacher: "<<endl;
    t.input();
    t.display();

    return 0;
}