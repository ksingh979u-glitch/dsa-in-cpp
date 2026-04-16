#include<iostream>
using namespace std;
class hospital{
    protected:
    int hospitalid;
    string hospitalname;
    string location;
    public:
    static int hospitalcount;
    void registerhospital(){
        cout<<"enter hospital id";
        cin>>hospitalid;
       cout<<"enter hospital name: ";
       cin>>hospitalname; 
         cout<<"enter hospital location: ";
         cin>>location;

    }
    void displayhospital(){
        cout<<"hospital id: "<<hospitalid<<endl;
        cout<<"hospital name: "<<hospitalname<<endl;
        cout<<"hospital location: "<<location<<endl;
    }
    static void showhospital(){
        cout<<"total hospital registered: "<<hospitalcount<<endl;
    }
    hospital(int id=0,string name="unknown",string loc="unknown"){
        hospitalid=id;
        hospitalname=name;
        location=loc;
        hospitalcount++;
    }
    ~hospital(){
        cout<<"hospital record removed "<<hospitalname<<endl;
    }

};
int hospital::hospitalcount=0;
class patient:public hospital
{
    private:
    int pationtid;
    string disease;
    int addmissiondate;
    public:
    void registerpatient(){
        cout<<"enter patient id: ";
        cin>>pationtid;
        cout<<"enter disease: ";
        cin>>disease;
        cout<<"enter addmission date: ";
        cin>>addmissiondate;
    }
    void displaypatient(){
        displayhospital();
        cout<<"patient id: "<<pationtid<<endl;
        cout<<"disease: "<<disease<<endl;
        cout<<"addmission date: "<<addmissiondate<<endl;
    }
    void dischargepatient(){
        cout<<"patient discharged "<<pationtid<<endl;
    }
    


};
int main(){
    patient p1;
     p1.registerhospital();
    
    hospital::showhospital();
    p1.registerpatient();
    p1.displaypatient();
    p1.dischargepatient();
   
    return 0;

}
