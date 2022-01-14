// begin() – Returns an iterator pointing to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
// rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
// cbegin() – Returns a constant iterator pointing to the first element in the vector.
// cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
// crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
#include <iostream> 
#include <vector>
using namespace std ; 
// letss make a function using vector 
void display(vector<int> &v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " " << endl ;
    }
    cout << endl ; //new space or line print hojaati h 

}
int main(){
    // vector is used to resize the array 
    vector<int> v1 ;
    for(int i = 0 ;  i <  4 ; i++){
        int element ;
        cout << " Enter the element addded to the vector " << endl ;
        cin >> element;
        v1.push_back(element);
    }
    v1.pop_back();
    //ek back ho jaega
    display(v1);
    vector<int> :: iterator iter = v1.begin() ;
    v1.insert(iter+1 , 700 , 766 ) ;//if you want ki baad me add ho toh add +1 to it 

    display(v1);
    return 0 ;
}