// recursion : when  a function calls itself
//  when a complex problem ka solution depends krts h same type ki same type ki chotu problem ke upr 
// factorial problem 1 : code
// segmentatin fault : whe the memory bhaar jaati h  , stack oberfloe ho jaata h 

#include <iostream>
using namespace std  ;
int factorial( int n ){
    if ( n == 0){
        return 1 ;
    }
    int choti = factorial(n-1);
    int badi = n * choti ; 
    return badi ; 

}
int power( int n){
    // base case 
    if(n == 0){
        return 1 ;
    }
    // recursive relation
    int small = power(n-1);
    int big = 2 * small;
    return big;

}
int count(int n ){
    // base case1 
    if(n==0){
        return 0 ; //here dont return 1 otherwise there will be 2 values of 
    }
    cout << n << endl ;
    // recursive function
    count(n-1);
}

int main(){
    int n ;  
    cin >> n ;
    // int ans = factorial(n);
    // cout << ans << endl ; 
    int ans = count(n);
    cout << ans << endl ;
    return 0   ;
}
// recursion tree : if n : ek type ka loop like a tree 
