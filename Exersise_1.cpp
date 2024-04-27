#include <iostream>
#include <string>
using namespace std;

int main() {
    //declaring a pointer to store int variable address
    int* dynamicInt = new int;
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;
    //declaring a point to store a string variable address
    std::string* dynamicString = new std::string;
    /*Asking a user for input*/
    cout << "Enter a string value: ";
    //getting string input
    cin >> *dynamicString;
    //displaying output
    cout << "Integer value: " << *dynamicInt << endl;
    cout << "String value: " << *dynamicString << endl;
    delete dynamicInt;
    delete dynamicInt;
    delete dynamicString;
    delete dynamicString;




    return 0;
}