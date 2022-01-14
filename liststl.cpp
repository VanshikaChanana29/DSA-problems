#include <iostream>
#include <list>
using namespace std ; 

int main(){
    list <int> list1;
    list <int> list2(7); 
    list1.push_back(12);
    list1.push_back(43);
    list1.push_back(45);
    list1.push_back(98);
    list<int> :: iterator it ; 
    it = list1.begin();
    cout << *it << endl ;
    it++ ; 

   

    return 0 ;
}