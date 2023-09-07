#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{

    // declare variable
    string gender;
    int height, age;
    // input
    cout<<"please enter your gender= "<<endl;
    cin>>gender;

    cout<<"please enter your height= "<<endl;
    cin>>height;

    cout<<"please enter your age= "<<endl;
    cin>>age;


    // conditions
if (gender=="male"){
     if ((age<=15)&&((height>=160)&&(height<165))){
        cout<<"kategori A"<<endl;
        
    } else if (((age<=20)&&(age>15))&&((height>=165)&&(height<170))){
        cout<<"kategori B"<<endl;

    } else if ((age>20)&&((height>=170))){
        cout<<"kategori C"<<endl;
    } else {
    cout<<"invalid input";
   }
   } else if (gender=="female"){
     if ((age<=17)&&((height>=155)&&(height<160))){
        cout<<"kategori X"<<endl;
        
    } else if (((age<=23)&&(age>17))&&((height>=160)&&(height<165))){
        cout<<"kategori Y"<<endl;

    } else if (((age<=30)&&(age>23))&&((height>=165)&&(height<170))){
        cout<<"kategori Z"<<endl;

   } else {
    cout<<"invalid input";
   }
}
}
