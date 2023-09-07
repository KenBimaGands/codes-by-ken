#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    // declare the variable
    int date;
    string month;
    
    // ask the question
    cout<<"masukkan tanggal lahir anda"<<endl;
    cin>>date;
    cout<<"masukkan tanggal lahir anda"<<endl;
    cin>>month;

    // results
    if ((((date>=21)&&(month=="march")))||((date<20)&&(month=="april"))){
        cout<<"Aries"<<endl;

    } else if ((((date>=20)&&(month=="april")))||((date<21)&&(month=="may"))){
        cout<<"Taurus"<<endl;

    } else if ((((date>=21)&&(month=="may")))||((date<21)&&(month=="june"))){
        cout<<"Gemini"<<endl;

    } else if ((((date>=21)&&(month=="june")))||((date<23)&&(month=="july"))){
        cout<<"Cancer"<<endl;

    } else if ((((date>=23)&&(month=="july")))||((date<23)&&(month=="august"))){
        cout<<"Leo"<<endl;

    } else if ((((date>=23)&&(month=="august")))||((date<23)&&(month=="september"))){
        cout<<"Virgo"<<endl;

    } else if ((((date>=23)&&(month=="september")))||((date<23)&&(month=="october"))){
        cout<<"Libra"<<endl;

    } else if ((((date>=23)&&(month=="october")))||((date<22)&&(month=="november"))){
        cout<<"Scorpio"<<endl;

    } else if ((((date>=22)&&(month=="november")))||((date<22)&&(month=="december"))){
        cout<<"Sagitarius"<<endl;

    } else if ((((date>=22)&&(month=="december")))||((date<20)&&(month=="january"))){
         cout<<"Capricorn"<<endl;

    } else if ((((date>=20)&&(month=="january")))||((date<19)&&(month=="february"))){
         cout<<"Aquarius"<<endl;

    } else if ((((date>=19)&&(month=="february")))||((date<21)&&(month=="march"))){
         cout<<"Pisces"<<endl;
    } else if (date >31) {
      cout<<"invalid date"<<endl;
    }

    return 0;
}
