//Write a program to print your name.
#include <iostream>
using namespace std;

int main() {
    cout << "Anchal";
    return 0;
}

//Write a program for a Single line comment and multi-line comment

// This is a single-line comment

/*
    This is a multi-line comment
    It can span multiple lines
*/

//Define variables for different Data Types int, Boolean, char, float, double and print on the Console
int x=10;
cout<<typeid(x).name()<<endl; //i
bool d = true;
cout<<typeid(d).name()<<endl;  //b
char c='a';
cout<<typeid(c).name()<<endl;  //c
float y=1.2f;
cout<<typeid(y).name()<<endl;  //f
double z=1.200220;
cout<<typeid(z).name()<<endl;  //d


//Define the local and Global variables with the same name and print both variables and understand the scope of the variable
// Ans: usually, compiler gives preference to the local variables when both have same name in different scope
//  so to print global variable , we use scope resoultion(::)
int x = 5;
int main(){
    int x=10;
    cout<<"global is"<<::x;
    cout<<"local is"<<x;

}