#include<iostream>

using namespace std;

//1]Solid Half pyramid

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<i+1;j++){
//              cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 2] Inverted Half pyramid

//  int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<=i;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<n-i;j++){
//              cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 3] Full pyramid

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<i+1;j++){
//              cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<n-i;j++){
//              cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 4] Hollow Half pyramid

// int main(){
//     int n;
//     int i,j;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //star
        
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i ){
//                      cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }cout<<endl;
//     }
//     return 0;
// }

// 5] Inverted Hallow Half pyramid

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<n-i;j++){
//             if(j==0||j==n-i-1){
//              cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 6] Hollow Full pyramid

// int main(){
//     int n;
//     int i,j;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //star
        
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i ){
//                      cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<n-i;j++){
//             if(j==0||j==n-i-1){
//              cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 7] Flipped solid dimond

// int main(){
//     int i,j;
//     int n;
//     cin>>n;
//     // half
//     for(int i=0;i<n;i++){
//         //inverted pyramid 1
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         //hallow full pyramid 1
//         for(int j=0;j<2*i+1;j++){
//             cout<<"  ";
//         }
//         //inverted pyramid 1
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     //inverted half
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<2*n-2*i-1;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// 8] number and stars

// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*i+1;j++){
//             if(j%2==1){
//                 cout<<"*";
//             }
//             else{
//             cout<<i+1;
//             }
//         }cout<<endl;
//     }
// }

// 9] no. plus star 
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*i+1;j++){
//             if(j%2==1){
//                 cout<<"*";
//             }
//             else{
//             cout<<i+1;
//             }
//         }cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*n-2*i-1;j++){
//             if(j%2==1){
//                 cout<<"*";
//             }
//             else{
//             cout<<n-i;
//             }
//         }cout<<endl;
//     }
// }

// 10] Hallow pyramid

// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             if(i==0||j==0||i==n-1||j==n-i-1){
//                 cout<<"* ";
//             }
//             else{
//             cout<<"  ";
//             }
//         } cout<<endl;
//     }
// }

// 11]
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(j==0||j==i){
//                 cout<<j+1;
//             }
//             else{
//                 cout<<" ";
//             }
//         }cout<<endl;
//     }
// }

// 12]
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             char ch=j+'A';
//             cout<<ch;
//         }
//         for(int j=i;j>0;j--){
//             char ch=j+'A'-1;
//             cout<<ch;
//         }cout<<endl;
//     }
// }

// 13] Numeric Hallow Inverted Half pyramid
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n-i;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<j+1;
//         }cout<<endl;
//     }
// }

//14] Numeric palindrome equilataral traingle
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<i+1;
//         }
//         for(int j=1;j<i+1;j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// }
//15] 
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*n-i-2;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             if(j%2==0){
//             cout<<i+1;
//             cout<<" ";
//             }
//             else{
//                 cout<<"* ";
//             }
//         }
//         for(int j=0;j<2*n-i-2;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//16] solid Half Diamond
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//      for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//18] butterfly pattern
// int main(){
//       int i,j,n;
//       cin>>n;
//       for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<2*n-2*i-2;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//       }
//       for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<2*i;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//       }
// }