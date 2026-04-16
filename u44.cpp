#include<iostream>
using namespace std;
class library{
    protected:
    int libraryid;
    string libraryname;
    string city;
    public:
    static int librarycount;
    void registerlibrary(){
        cout<<"enter library id: ";
        cin>>libraryid;
        cout<<"enter library name: ";
        cin>>libraryname;
        cout<<"enter city: ";
        cin>>city;
    }   
    void display(){
        cout<<"library id: "<<libraryid<<endl;
        cout<<"library name: "<<libraryname<<endl;
        cout<<"city: "<<city<<endl;
    }
    static void showlibraries(){
        cout<<"total libraries"<<librarycount<<endl;
    }
    
};
int main(){

return 0;
}