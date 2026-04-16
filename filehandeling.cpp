#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name;
    string name2;
    cout << "enter your name: ";
    cin >> name;
    ofstream out("hello.txt"); // this will create a file named hello.txt in the same directory as the program and write "hello name" in it
    // this is writing to a file, if the file already exists it will overwrite the existing content, if it doesn't exist it will create a new file and write to it
    out << "hello " << name;
    out.close();                                     // this will close the file after writing to it, it's important to close the file after writing to it to free up system resources and to ensure that the data is properly saved to the file
    ifstream in("hello.txt");                        // this will read the content of the file hello.txt and store it in the variable name2
    getline(in, name2);                              // we used getline because it will read the whole line of the file, if we used in>>name2 it would only read the first word "hello"
    cout << "how are you, " << name2 << "?" << endl; // this will print the content of the file hello.txt that has been entered by the user, it will print "how are you, hello name?" where name is the name entered by the user

    in.close(); // this will close the file after reading from it, it's important to close the file after reading from it to free up system resources

    return 0;
}