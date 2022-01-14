// pointers in c++   = used to store the adreess of the data . 
// int *ptr = &i ;(syntax to create the pointer)here ptr is the pointer to int datatype 
// you can use char also .. 
// double *ptr = &d ( ptr is the pointer to double )

#include <iostream> 
using namespace std ;
int main(){
    int num = 3 ; 
    cout << num << endl ;
     
    // adress of operator = & in hexadecimal format 
    cout << "adress of operator is &num" << &num <<endl ;
    int *ptr  = &num ; 
    cout << " the value of the operator ptr is " << *ptr << endl ;
    // if sirf ptr is used then only adreess aaega nd with * refernce opertaor value bhi aaegi 
    // you van make diffrent types of pointers using diffrent values of data types  
    double d = 6.9 ; 
    double *pi = &d ; 
    cout << "adress" << d << endl ; 
    cout << "adress" << &d << endl ; 
    cout << "size " << sizeof(d) << endl; // this is the pointer which is double 
    cout << "size" << sizeof(pi) << endl ; //this is the value 
    int mun = 7 ; 
    int a = mun ; 
    a++ ; 
    cout << "print mum " << a << endl ; 
    int *p = &num ; 
    cout << " before " << num << endl ;
    (*p)++ ; 
    cout << "after " << num << endl ;
    int *q = p ; 
    cout << p << "-" << q << endl ; 
    cout << *q << "-" << *q << endl; //here all comes same 
    // here everything is connected 
    // important concepts 
    int  i = 9 ; 
    int *n = &i ; 
    cout << "print the following " << (*n)++ << endl ;
    cout << "print the following " <<  i << endl ; 
    return  0 ; 
}