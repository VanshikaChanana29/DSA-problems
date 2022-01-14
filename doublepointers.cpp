// double pointers 
// int value = 9 ;
// int * ptr = & value; this shows which type of data
#include <iostream>
using namespace std ;
void update(int **p){
    p = p+1 ; 
    // kuch change hoga - no change 
    // *p = *p+1;
    // // anyhtings ?? hoga
    // **p = **p + 1 ;
    // ab kuch hua ?? 

}
// MCQS 
//  

int main(){
    int i = 8 ; 
    int *p = &i ;
    int **p2 = &p ;
    // cout << p << endl; 
    // cout << &p << endl; 
    cout <<  endl << endl ;
    cout << i << endl ;
    cout << p << endl ;
    cout << p2 << endl ;
    update(p2);
     cout << i << endl ;
    cout << p << endl ;
    cout << p2 << endl ;
    cout << endl << endl ;



    // pointer and functions


    return 0 ; 
}
