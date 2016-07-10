#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    string name;
    cout << "Enter Twitter User Name: @";
    cin >>  name; 
    name = "@"+name;
    cout << " The User Name is: " << name << endl;
}
