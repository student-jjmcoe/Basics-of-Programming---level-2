#include<iostream>
using namespace std;

// // 1.
// void printName(string name){
//     for(int i=0;i<5;i++){
//         cout<< name <<endl;
//     }
// }
// int main(){
//     printName("Love");
//     printName("Babbar");
//     printName("Classes");
//     printName("Raja");
// }

// //2.To print 10 times
// // void printLine(){
// //     for(int i=0;i<10;i++){
// //     cout<<"Hello my name is shweta"<<endl;
// //     }
// // }
// // Function declaration
// void printLine();

// int main(){
//     printLine();
//     return 0;
// }
// void printLine(){
//     for(int i=0;i<10;i++){
//     cout<<"Hello my name is shweta"<<endl;
//     }
// }

// // 3.
// void printA(){
//     cout<<"i am inside A"<<endl;
// }
// int main(){
//     cout<<"Hii"<<endl;
//     printA();
//     return 0;
// }

// // 4.
// void printA(){
//     cout<<"inside A "<<endl;
//     cout<<"going back to main"<<endl;
// }
// int main(){
//     cout<<"inside main function"<<endl;
//     printA();
//     cout<<"Back to main"<<endl;
//     return 0;
// }

// // 5. print sum of 3 numbers
// void printSum(int a,int b,int c){
//     int answer = a+b+c;
//     cout<<"sum is : "<<answer<<endl;
// }
// int main(){
//     printSum(1,8,9);
//     return 0;
// }

// // 6. Return sum of 3 numbers
// int printSum(int a,int b,int c){
//     int ans = a+b+c;
//     return ans;
// }
// int main(){
//     int sum = printSum(1,8,9);
//     cout<<"sum is : "<<sum<<endl;
//     return 0;
// }

// // 7. using return in void function
// void messagePrint(){
//     cout<<"Msg 1"<<endl;
//     return;
//     cout<<"Msg 2"<<endl;
// }
// int main(){
//     messagePrint();
// }

// // 8. max of 3 numbers
// void findMax(int a,int b,int c){
//     if(a>=b && a>=c){
//         cout<<"Max is : "<<a<<endl;
//     }
//     else if(b>=a && b>=c){
//         cout<<"Max is : "<<b<<endl;
//     }
//     else{
//         cout<<"Max is : "<<c<<endl;
//     }
// }
// int main(){
//     findMax(11,9,23);
// }
// // another method
// void printMax(int n1, int n2,int n3){
//     int ans1= max(n1,n2);
//     int finalAns= max(ans1,n3);
//     cout<<"max is : "<<finalAns<<endl;
// }
// int main(){
//     printMax(11,39,23);
// }
// //for return
// int printMax(int n1, int n2,int n3){
//     int ans1= max(n1,n2);
//     int finalAns= max(ans1,n3);
//     return finalAns;
// }
// int main(){
//     int finalAns=printMax(11,39,230);
//     cout<<"max is : "<<finalAns<<endl;
// }


// //9.Counting from 1 to N
// void printCounting(int n){
//     for(int i=1;i<=n;i++){
//       cout<<i<<'\t';
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printCounting(n);
// }

// //10.check prime number
// void checkPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Not prime"<<endl;
//             return;
//         }
//     }
//             cout<<"Prime"<<endl;
            
//     }
// int main(){
//     int n;
//     cin>>n;
//     checkPrime(n);
// }
// // Another method
// //return true -> if N is primre number
// //return false -> if N is not prime number
// bool checkPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             //remainder = 0 -> perfectly divisible
//             //not a prime number
//             return false;
//         }
//     }
//     //[2,3,4,5,...... n-1],koi bhi N ko perfectly divide
//     //nahi karta

//     // it means ,N is prime number
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     bool prime = checkPrime(n);
//     if(prime){
//         cout<<"given number is prime"<<endl;
//     }
//     else{
//         cout<<"given number is not prime number"<<endl;
//     }
// }


// //11.check even or odd
// void checkEvenOdd(int n){
//     if(n%2==0){
//         cout<<"EVEN"<<endl;
//     }
//     else{
//         cout<<"ODD"<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     checkEvenOdd(n);
// }

// //12.sum of all numbers up to N
// int printSum(int n){
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//       sum=sum+i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     printSum(n);
//     cout<<"sum is : "<<printSum(n)<<endl;
// }


// //13.sum of all even numbers up to N
// int printEvenSum(int n){
//     int sum = 0;
//     for(int i=0;i<=n;i=i+2){
//       sum=sum+i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int sum = printEvenSum(n);
//     cout<<"sum is : "<<sum<<endl;
// }