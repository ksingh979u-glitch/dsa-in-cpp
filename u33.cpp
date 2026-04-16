#include<iostream>
using namespace std;
class company{
    private:
    int companyid;
    string companyname;
    string industry;
    public:
    static int companycount;
    void registercompany(){
        cout<<"enter company id: ";
        cin>>companyid;
        cout<<"enter company name: ";
        cin>>companyname;
        cout<<"enter industry: ";
        cin>>industry;
    }
    void displaycompany(){
        cout<<"company id: "<<companyid<<endl;
        cout<<"company name: "<<companyname<<endl;
        cout<<"industry: "<<industry<<endl;
    }
    static void totalcompanies(){
        cout<<"total companies are "<<companycount<<endl;
    }
    company(){
        companyid=0;
        companyname="unknown";
        industry="unknown";
        companycount++;
    }
    company(int id,string name,string ind){
        companyid=id;
        companyname=name;
        industry=ind;
        companycount++;
    }
    ~company(){
        cout<<"company record removed "<<companyname<<endl;
    }
    friend
};

int company::companycount=0;

int main(){

return 0;
}