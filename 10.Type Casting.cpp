#include<iostream>

using namespace std;

// //IMPLICIT TYPE CASTING
// int main(){
//     int num1 = 10;
//     float num2 = 5.5;
//     float result= num1+num2;
//     cout<<result<<endl;
//     int num3 = num1 + num2;
//     cout<<num3<<endl;
    
//     char ch = 'A';
//     int a='A'+1;
//     cout<<ch<<endl;
//     cout<<a<<endl;
// }

//EXPLICIT TYPE CASTING
int main(){
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2;
    cout<<result<<endl;

    //2.float to char
    float floatingNumber = 65.35;
    // Explicit conversion from float to char
    char charValue = (char)floatingNumber;
    cout<<charValue<<endl;

    // 3.int to float
    int a=10;
    int b=3.0;
    // Explicit conversion from int to float
    float c = a/b;
    cout<<c<<endl;


    float e=10;
    int d=3.0;
    // Explicit conversion from int to float
    float f = e/d;//or(float)e/d
    cout<<f<<endl;
}