#include <iostream>
using namespace std;
class shopping
{
private:
    string itemnnumber;
    int quantity;
    int sum = 0;
    int a;

    string array[5][3] = {{"1100", "tomato", "20"},
                          {"1101", "onion", "30"},
                          {"1102", "potato", "40"},
                          {"1103", "carrot", "50"},
                          {"1104", "cabbage", "60"}};

public:
    void input()
    {

        cout << "enter the total number of different items you want to buy: ";
        cin >> a;
    }
    void process()
    {
        for (int i = 0; i < a; i++)
        {
            cout << "enter the item number" << endl;
            cin >> itemnnumber;
            if (itemnnumber=="1100")
            {
               cout<<"enter the quantity: ";
               cin>>quantity;
                sum+=quantity*20;
            }
            else if (itemnnumber=="1101")
            {
               cout<<"enter the quantity: ";
               cin>>quantity;
                sum+=quantity*30;
            }
            else if (itemnnumber=="1102")
            {
               cout<<"enter the quantity: ";
               cin>>quantity;
                sum+=quantity*40;
            }
            else if (itemnnumber=="1103")
            {
               cout<<"enter the quantity: ";
               cin>>quantity;
                sum+=quantity*50;
            }
            else if (itemnnumber=="1104")
            {
               cout<<"enter the quantity: ";
               cin>>quantity;
                sum+=quantity*60;
            }
            else{
                cout<<"invalid item number"<<endl;
                continue;
            }
            
        }
        cout<<"item number\titem name\tprice per item"<<endl;
        for (int i = 0; i < a; i++)
        {
           
        }
        
        cout<<"total amount: "<<sum<<endl;
    }

} int main()
{

    return 0;
}