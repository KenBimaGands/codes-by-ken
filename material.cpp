#include <iostream>
#include <cmath>
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

<<<<<<< HEAD
int main(int argc, char const *argv[])
{
   int a;
   cout<<"please enter your month = ";
   cin>>a;


   switch(a){
      case 1: cout<<"january"<<endl;
         break;
      case 2: cout<<"february"<<endl;
         break;
      case 3: cout<<"march"<<endl;
         break;
      case 4: cout<<"april"<<endl;
         break;
      case 5: cout<<"may"<<endl;
         break;
      case 6: cout<<"june"<<endl;
         break;
      case 7: cout<<"july"<<endl;
         break;
      case 8: cout<<"august"<<endl;
         break;
      case 9: cout<<"september"<<endl;
         break;
      case 10: cout<<"oktober"<<endl;
         break;
      case 11: cout<<"november"<<endl;
         break;
      case 12: cout<<"desember"<<endl;
         break;
   default: cout<<"not a month in a calendar year";
   }
}
=======
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
>>>>>>> material-1
