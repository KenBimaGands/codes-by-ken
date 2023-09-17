#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]){
    // set the range
    int n;
    cin>>n;

    // set the double loop
     for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < i ; j++)
        {
            cout<<"*";
        } cout<<endl;
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n ; j > i ; j--)
        {
            cout<<"*";
        } cout<<endl;
        
    }
    
}
// {
//     //declare the variable

//     int K,N;
//     cin>>K>>N;

//     // set the algorithm
//     for (int i = 1; i <= K; i++)
//     {
//         if (i%N ==0)
//         {
//             cout<<"* ";
//             continue;
//         }
        
//        cout<<i<<" ";
//     }
// { for segitiga siku siku!
//     // set the range
//     int n;
//     cin>>n;

//     // set the double loop
//     for (int i = 5; i > n; i--)
//     {
//         for (int j = 0; j < i ; j++)
//         {
//             cout<<"*";
//         } cout<<endl;
        
//     }
    
// }
// { //fibonacci
//     cout<<"deret fibonacci \n"<<endl;
//     int n;

//     cout<<"masukkan jumlah deret"<<endl;
//     cin>>n;

//     // rumus fibonacci : f(n)= f(n-1)+f(n-2)
//     int fn;
//     int fn_1;
//     int fn_2;


//     fn_1=1;
//     fn_2=0;
//     cout<<fn_1<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         fn = fn_1 + fn_2;
//         fn_2 = fn_1;
//         fn_1 = fn;

//         cout<<fn<<endl;
//     }
    
// }
// {
//     float i,n;
//     cin>>n;
//     for ( i = 0; i <= n; i++)
//     {
//         if (i/2 == 1)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
    


//          }

// {
//     // continue with while
//     int i =0;
//     while (i<=10)
//     {
//         i++;
//         if ((i==5)||(i>10)){
//             continue;
//         }
//         cout<<i<<endl;
        
//     }
    
// }
// continue  with for
// {
//         for (int i=0; i<=10; i++ ){
//             if ((i==5)||(i==10))
//             {
//                 continue;
//             }
//             cout<<i<<endl;
            
//         }
// }
// {
//     int x[4]= {1,2,3,4};
//     int i;
//     int a;

//     for (i=0; i<4; i++){
//         a+=x[i];

//         cout<<a<<endl;
//     } output = 17,19m
    
// }
    
    
