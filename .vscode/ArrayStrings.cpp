// given an array , consisting of characters 
#include <iostream>
using namespace std  ;
// to find the length of the array
int getLength(char name[]){
    int count = 0 ; 
    for( int i = 0 ; name[i] != '\0' ; i++){
        count++ ; 
    }
}
// reverse a string 
void reverse(char name[] , int n ){
    int s=0 ; 
    int e = n-1 ; 
    while( s <= e){
        swap( name[s++] ,  name[e--]);
    
}
}
// cin is used to get input  
int main(){
    // null character is used to terminate the loop 
    char name[20] ; 
    cout << " Enter your name " << endl ; 
    
    cin >> name ; 
    name[2] = '\0' ; 
    // null character mtlb yeh sb erminate ho jaega 
    
    cout << " length " << getLength(name) << endl ; 
    int len = getLength(name) ; 
    cout << " Length of the string is " << len ; 
    reverse( name , len);
    cout << " Your name is " << name << endl ;
    return 0 ; 
}