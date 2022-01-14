// Recusion with arrays
// 1. tell the array is sorted or not 
// #include <iostream>
// using namespace std ; 
// bool isSorted(int *arr , int size ){
//     // base case
//     if (size==0 || size==1){
//         return true ;
//     }
//     if(arr[0] > arr[1]){
//         return false ;
//     }
//     else{
//         bool remainsame = isSorted(arr+1 , size-1);
//         return remainsame ;
//     }

// }

// int main(){

//     int arr[5] = { 3 , 61 , 23 , 87 , 89 };
//     int size = 5 ;
//     bool answer = isSorted( arr , size);
//     if(answer){
//         cout << " Array is sorted" << endl ;
//     }
//     else{
//         cout << "not sorted " << endl ;
//     }
//     return 0 ;
// }

// find the sum totall
// int sum( int n){
//     if (n <= 1){
//         return n ;
//         return n + sum(n-1);
        

//     }
    
// }
// int main(){
//     int n ;
//     cin >> n ;
//     cout << sum(n);
//     return 0 ;
// }

// C++ program to find the
// sum of natural numbers up
// to n using recursion
#include <iostream>
using namespace std;
 
// Returns sum of first
// // n natural numbers
// int recurSum(int n)
// {
//     if (n <= 1)
//         return n;
//     return n + recurSum(n - 1);
// }
 
// // Driver code
// int main()
// {
//     int n = 5;
//     cout << recurSum(n);
//     return 0;
// }

// bool  linearsearch(int arr[] , int size , int key){
//     // base case
//     if( size == 0){
//         return false ;
//     }
//     if(arr[0] == key){
//         return true ;
//     }
//     else{
//         bool remain = linearsearch( arr+1 , size - 1 , key);
//         return remain ;
//     }

// }

// int main(){
//     int arr[7]= { 67, 87, 56 , 9 , 23 , 56 , 65 };
//     int size  = 7 ;
//     int key = 23 ;
//     bool a =  linearsearch(arr , size , key);
//     if(a){
//         cout << " Present " << endl ;

//     }
//     else{
//         cout << " absent " << endl ;
//     }
//     return  0;
// }
// bool binarysearch(int *arr , int s , int e , int k){
//     if ( s > e)
//     return false ;
//     int mid = s + (e-s)/2;
//     if(arr[mid] < k){
//         return binarysearch(arr , mid+1 , e , k);
//     }
//     else{
//         return binarysearch(arr , s , mid - 1 , k)
//     }

// }
// int main(){
//     int arr[5] = {34, 54, 122 ,8};
//     int k = 12;
//     int s = 4 ;
//     return 0 ;

//     }
 