#include <iostream>
using namespace std;


int main() {
    string nama, kelas;
    cout<<"masukkan nama anda: "<<endl;
    cin>>nama;
    if (nama=="ken" || nama=="qila"){
        cout<<"passed"<<endl;
    } else {
        cout<<"not passed"<<endl;
    }
std::cin.get();
return 0;
}