#include<iostream>

using namespace std;

// // 1.Using long if else statement
// int main(){
//     float a,b;
//     cout<<"Enter Two Numbers : "<<endl;
//     cin>>a;
//     cin>>b;
//     int op;
//     cout<<"Enter choice : "<<endl;
//     cin>>op;
//     float ans = 0;
//     //op 0 -> add, 1 -> sub, 2 -> mul, 3 -> divide 
//     if(op==0){
//         ans=a+b;
//     }
//     else if(op==1){
//         ans=a-b;
//     }
//     else if(op==2){
//         ans=a*b;
//     }
//     else if(op==3){
//         ans=a/b;
//     }
//     else{
//         cout<<"Invalid Operation"<<endl;
//         return 0;  
//     }
//     cout<<"Answer is : "<<ans<<endl;
//     return 0;
// }

// // switch case without using break
int main(){
    float a,b;
    cout<<"Enter Two Numbers : "<<endl;
    cin>>a;
    cin>>b;
    int op;
    cout<<"Enter choice : "<<endl;
    cin>>op;
    float ans = 0;
    //op 0 -> add, 1 -> sub, 2 -> mul, 3 -> divide
    switch(op){
        case 0 : cout<<"Addition"<<endl;
             ans = a + b;

        case 1 : cout<<"substraction"<<endl;
             ans = a - b;
               
        case 2 : cout<<"multiplication"<<endl;
             ans = a * b;
               
        case 3 : cout<<"division"<<endl;
             ans = a / b;
               
        default : cout<<"Invalid Number\n";
        
    } 
    
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}

// // switch case without using break
// int main(){
//     float a,b;
//     cout<<"Enter Two Numbers : "<<endl;
//     cin>>a;
//     cin>>b;
//     int op;
//     cout<<"Enter choice : "<<endl;
//     cin>>op;
//     float ans = 0;
//     //op 0 -> add, 1 -> sub, 2 -> mul, 3 -> divide
//     switch(op){
//         case 0 : ans = a + b;
//                break;
//         case 1 : ans = a - b;
//                break;
//         case 2 : ans = a * b;
//                break;
//         case 3 : ans = a / b;
//                break;
//         default : cout<<"Invalid Number";
//         return 0;
//     } 
    
//     cout<<"Answer is : "<<ans<<endl;
//     return 0;
// }