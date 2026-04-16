#include<iostream>
#include<ctime>
using namespace std;
class managment
{
private:
    int addmisionno[100] = {0}, rollno[100] = {0}, addmisioncheck = 0;
    public:
    string name[100];
    int input=0,count=0;
    void take(){
        cout<<"TO TAKE ADMISSION PRESS 1 "<<endl;
        cout<<"TO CHECK ADMISSION STATUS PRESS 2 "<<endl;
        cin>>input;
        srand(time(NULL));
         if(input==1){
            cout<<"to add more students press 1 or to exit press 2"<<endl;
            int exit;
            cin>>exit;
            if(exit==1){
                for (int i = 0; i < 100; i++)
                {
                    
                }
                

            }
         }

    }


};

int main(){

return 0;
}