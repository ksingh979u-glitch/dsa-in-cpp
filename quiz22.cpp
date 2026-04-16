  #include<iostream>
using namespace std;
int main(){
char input;
int count=0;
string question[]={"who is the greatest batter in world","best bowler in the world","how will win ipl this year"};
                     

string options[][4]={{" virat kohli" ," dhoni"," kushagra singh","tushar"},
                    {"bumrah","bla bla","honey singh","sachin"},
                    {"mi","csk","rcb","rr"}};
char answer[]={'A','A','C'};   
char op[]={'A','B','C','D'};   



for(int i=0;i<3;i++){
    cout<<endl;  

    cout<<"question "<<(i+1)<<" is "<<endl<<question[i]<<endl;
    
    cout <<"your options are the following"<<endl;
    for(int j=0;j<=3;j++){
   
 cout<<op[j]<<" "<<options[i][j]<<endl ;
 

}
cout<<endl;

cout<<"enter your answer- ";
 cin>>input;
 input= toupper(input);

 if(input==answer[i]){
 
cout<<"your answer is correct"<<endl;
count++;

 }
else{cout<<"your answer is wrong"<<endl;
     cout<<"the correct answer is "<<answer[i]<<endl;
}


}
cout<<"your score out of 3 is "<<count;


return 0;
}