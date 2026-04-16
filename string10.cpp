#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter name";
    getline(cin, s);

    // cout<<"length of string is: "<<s.length()<<endl;//length() function returns the length of the string
    // cout<<"you did not enter the name: "<<s.empty()<<endl;//empty() function checks whether the string is empty or not if empty returns true(1) else false(0)
    // cout<<"cleared name is: "<<s.clear()<<endl;//clear() function clears the string
    cout << "my gmail is: " << s.append("@gmail.com") << endl; // append() function appends the given string at the end of the original string
    // cout <<"letter in index 2 is: "<<s.at(2)<<endl;//at() function returns the character at the specified index
    // cout<<"to put anything between index 2 : "<<s.insert(2,"xyz")<<endl;//insert() function inserts the given string at the specified index
    // cout<<"to find the first occurrence of a substring: "<<s.find(" ")<<endl;//find() function returns the index of the first occurrence of the specified substring
    // cout<<"to erase characters from index 2 to 4: "<<s.erase(2,4)<<endl;//erase() function erases the specified number of characters from the specified index
    // stoi(s) → converts string to int
    // stof(s) → converts string to float
    // stod(s) → converts string to double
    return 0;
}