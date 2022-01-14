// Rescursion video 2 with questions 
// compnenets - manadatory : base case , recursive approch / optional : processing 
// Fibonnaci series (0 , 1  , 1 , 2 , ..... )
// coun ways to reach n stairs 
#include <iostream>
using namespace std  ; 
// int fibonacci(int n ){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1 ; 
//     }
//     int ans = fibonacci(n-1)+fibonacci(n-2);
//     return ans ;

// }
// code to count n stairs 
int count(int n ){
    if (n < 0){
        return 0 ; 
    }
    if(n == 0){
        return 0 ; 
    }
    // recursive call 
    int ans = count(n-1) + count(n-1);
return n ;

}

int main(){
    int n ;
    cin >> n ;
    // int m = fibonacci(n);
    // cout << m << endl ;
    int m = count(n);
    cout << m << endl; 
     
}