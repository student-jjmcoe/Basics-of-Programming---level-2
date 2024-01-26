#include<iostream>
using namespace std;

//  // bitwise AND &
// int main(){
//     int a=2;
//     int b=3;

//     cout<<(a&b)<<endl;

//     return 0;
// }

// // bitwise OR |
// int main(){
//     int a=5;
//     int b=10;

//     cout<<(a | b);

//     return 0;
// }

// bitwise NOT 
// int main(){
//     int num=1;
//     cout<<~num<<endl;
//     cout<<~(num)<<endl;
//     cout<<(~num)<<endl;
// }

// bitwise XOR
// int main(){
//     int a=5;
//     int b=5;
//     int c=6;
//     int d=10;
//     int e=-5;

//     cout<<(a ^ b)<<endl;
//     cout<<(b ^ c)<<endl;
//     cout<<(b ^ d)<<endl;
//     cout<<(b ^ e)<<endl;

//     return 0;
// }

// // Left shift operator <<
// int main(){
//     int a=7;
//     int ans=(a << 1);
//     cout<< ans << endl;
//     cout<<(a<<2)<<endl;
//     cout<<(a<<3)<<endl;
// }

// Right shift operator >>
// int main(){
//     int a=80;
//     int b=5;
//     int c=-10;
//     int ans=(a>>1);

//     unsigned int n=-100;

//     cout<< ans << endl;
//     cout<<(a>>2)<<endl;
//     cout<<(a>>3)<<endl;
//     cout<<(b>>1)<<endl;
//     cout<<(b>>2)<<endl;
//     cout<<(c>>1)<<endl;
//     cout<<(n>>1)<<endl;
// }

// pre-post inc-decrement operator

// int main(){
    // int a=21;
    // cout<< ++a << endl;
    // cout<< a++ << endl;
    // cout<< a << endl;

    // int b=10;
    // cout<< (++b)*10<<endl;
    // cout<< (b++)*10<<endl;
    // cout<<b<<endl;

    // int c=10;
    // cout<<((++c)*(c++))<<endl;
    // cout<<((c++)*(++c))<<endl;

    // return 0;
// }

// Break And Continue
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<i<<endl;
//         break;
//     }
//     return 0;
// }

// int main(){
//     for(int i=0;i<5;i++){
//         cout<<i<<endl;
//         if(i==100)
//         break;
//     }
//     return 0;
// }

// int main(){
//     for(int i=0;i<5;i++){
//         cout<<i<<endl;
//         if(i==3)
//         break;
//     }
//     return 0;
// }

// int main(){
//     for(int i=0;i<5;i++){
//         cout<<i<<endl;
//         if(i==2)
//         break;
//     }
//     return 0;
// }

// int main(){
//     for(int i=0;i<=5;i++){
//         cout<<"Hello there"<<endl;
//         continue;
//         cout<<"How are You"<<endl;
//     }
//     return 0;
// }
int age=25;
int main(){
       int a=5;
       int b;

       a=25;
       cout<<a<<endl;

       for(int i=0;i<5;i++){
        cout<<i<<endl;//i local variable;
       }
       if(true){
        int a=25;
        cout<<a<<endl;
       }
       if(true){
        cout<<"inside if number 1"<<endl;
        int a=202;
        if(true){
            cout<<"inside if number 2"<<endl;
            //int a=303;
            cout<<a<<endl;
        }
        
       }
       //global declaration
       cout<<"age is:"<<age<<endl;

    return 0;
}
