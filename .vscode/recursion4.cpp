// recursion with strigs 
#include <iostream>
using namespace std ; 
// Ques1 : check palidrome
// if the normal string is equal to the reverse string
// bool checkPalindrome(string str , int i , int j){
//     if(i>j){
//         return;

//     }
//     if(str[i] =! str[j]){
//         return false ; 

//     }
//     else{
//         return checkPalindrome(str , i+1 , j-1);
//     }
// }
// Ques 2 : reverse a string 
// void reverse(string str , int i  , int j ){
//     if(i > j ){
//         return ; 
//     }
//     swap(str[i] , str[j]);
//     i++ ; 
//     j--;
//     reverse(str , i, j);

// }
// Ques3 : find the exponent 
int exp(int a  , int b){
    if(b==0){
        return  0 ; 
    }
    if(b==1){
        return a ; 
    }
    // recursive call 
    int ans = exp(a , b/2);
    if(b%2 == 0){
        return ans * ans ;
    }
    else(b%2 != 0 ){
        // if b is odd 
        return a * ans * ans ;
    }

}

int main(){
    // string name = "babbarr " ; 
    // cout << endl ;
    // bool isPalindrome = checkPalindrome(name , 0 , name.length() - 1);
    // if(isPalindrome){
    //     cout << " This is a palindrome " << endl ;
    // }
    // else{
    //     cout << " It is not a Palindrome " << endl ; 
    // }
    // string name = " famous " ; 
    // cout << endl ; 
    // reverse(name , 0 , name.length()-1);
    // cout << endl ; 
    // cout << name << endl ;
    // return 0 ;
    int a , b ;
    cin >> a >> b ; 
    cout << endl ;
    int ans = exp(a , b );
    cout << " The following answer is " << ans << endl ;

}
// revere a string 
