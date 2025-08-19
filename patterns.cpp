#include<iostream>
using namespace std;

// void pattern1(int n){
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern2(int n){
//     for(int i=0 ; i<n ; i++){
//         for(int j = 0 ; j<=i ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern3(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern4(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern5(int n){
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 0 ; j<n-i+1 ;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern6(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j<=n-i+1; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern7(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" "<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout<<"*"<<" ";
//         }
//         // for(int j=0; j<n-i-1; j++){
//         //     cout<<" "<<" ";
//         // }
//         cout<<endl;
//     }
// }

// void pattern8(int n){
//     for(int i = 0 ; i < n ; i++){
//         for(int j=0; j<i; j++){
//             cout<<" "<<" ";
//         }
//         for(int j=0; j<2*n-(2*i+1); j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern9(int n){
//     for(int i = 1; i<=2*n-1; i++){
//         int stars = i;
//         if(i>n) stars = 2*n-i;
//         for(int j=1; j<=stars; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern10(int n){
//     for(int i =0 ; i < n ; i++){
//         for(int j = 0 ; j<=i ; j++){
//             if((i+j)%2==0){
//                 cout<<"1"<<" ";
//             }else{
//                 cout<<"0"<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// void pattern11(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         for(int j=1; j<=2*(n-i); j++){
//             cout<<" "<<" ";
//         }
//         for(int j=i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern12(int n){
//     int count=1;
//     for(int i=0; i<n; i++){
//         for(int j =0; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

// void pattern13(int n){
//     for(int i=0; i<n; i++){
//         for(char ch='A'; ch<='A'+i; ch++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern14(int n){
//     for(int i=0; i<n; i++){
//         for(char ch ='A'; ch<='A'+(n-1-i); ch++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern15(int n){
//     for(int i=0; i<n; i++){
//         char ch='A'+i;
//         for(int j=0; j<=i; j++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern16(int n){
//     for(int i = 0; i < n; i++){
//         for(int j=0; j<=n-i-1; j++){
//             cout<<" "<<" ";
//         }
//         char ch = 'A';
//         int breakPoint = (2*i+1)/2;
//         for(int j = 1; j<=2*i+1; j++){
//             cout<<ch<<" ";
//             if(j<=breakPoint){
//                 ch++;
//             }else{
//                 ch--;
//             }
//         }
//         cout<<endl;
//     }
// }

// void pattern17(int n){
//     for(int i=0; i<n; i++){
//         for(char st = ('A'+n-1)-i; st<=('A'+n-1); st++){
//             cout<<st<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern18(int n){
//     for(int i=0; i<n/2; i++){
//         for(int j=1; j<=n/2-i; j++){
//             cout<<"*"<<" ";
//         }
//         for(int j=1; j<=2*i; j++){
//             cout<<" "<<" ";
//         }
//         for(int j=1; j<=n/2-i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     for(int k=n/2; k<n; k++){
//         for(int l=1; l<=k-(n/2)+1; l++){
//             cout<<"*"<<" ";
//         }
//         for(int l=1; l<=2*(n-(k+1)); l++){
//             cout<<" "<<" ";
//         }
//         for(int l=1; l<=k-(n/2)+1; l++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern19(int n){
//     for(int i=1; i<=n/2; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         for(int j=1; j<=n-(2*i); j++){
//             cout<<" "<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     for(int k = (n/2)+1; k<n; k++){
//         for(int l = 1; l<=n-k; l++){
//             cout<<"*"<<" ";
//         }
//         for(int l=1; l<=(2*k)-n; l++){
//             cout<<" "<<" ";
//         }
//         for(int l = 1; l<=n-k; l++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// void pattern20(int n){
//     for(int i=0; i<n; i++){
//         int row =i;
//         for(int j=0; j<n; j++){
//             int column = j;
//             if((i>0 && i<n-1) && (j>0 && j<n-1)){
//                 cout<<" "<<" ";
//             }else{
//                 cout<<"*"<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

void pattern21(int n){
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int bottom = (2*n-1)-i;
            int left = j;
            int right = (2*n-1)-j;
            cout<<n-min(min(top,left), min(right, bottom))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    
    pattern21(n);

}