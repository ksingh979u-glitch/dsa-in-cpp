#include<iostream>
using namespace std;
/* this template help if there is a funtion whose answer or input can be any data type in the function 
we would have to make different function for different data type like a function for char ,int ,double but when i use t and u i can use them 
like 2 differnt  data type in one function */

// i used auto if i am using different different data type then i dont have to specify the return type
//the auto keyword selects the type based on the return statement
template <typename T, typename U>
auto add(T a, U b) {
  return a + b;
}

int main() {
  cout << add(5, 3.6) << "\n";
  cout << add(2.5, 1.3) << "\n";
  return 0;
}
//by this we can use multiple overloded function in one function
//template T and U can not be used in main function directly only in the function where it is defined