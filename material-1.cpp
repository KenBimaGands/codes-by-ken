#include <iostream>

using namespace std;

int main() {
    string a= "allowed",
    b= "not allowed",
    c;

    cout<<"please enter your name"<<endl;
    cin>>c;

    if (c=="ken"){
        cout<<a<<endl;
    } else {
        cout<<b<<endl;
    }

}