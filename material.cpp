#include <iostream>

using namespace std;

int main() {
    int permen = 2000,
    chiki = 4000,
    biskuit = 6000,
    x,
    y,
    n;
    cout<<"masukkan jumlah permen:"<<endl;
    cin>>x;
    cout<<"masukkan jumlah chiki:"<<endl;
    cin>>y;
    cout<<"masukkan jumlah biskuit:"<<endl;
    cin>>n;
    
    cout<<(permen*x)+(chiki*y)+(biskuit*n)<<endl;
}