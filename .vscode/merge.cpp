// print or add two  arrays of the elemets 
#include <iostream > 
#include <vector> 
using namespace std  ; 
void merge(int arr1[] , int n , int arr2[] , int m , int arr3[]){
    int i = 0 ; int j = 0 ; 
    int k = 0 ;
    while( i < n && j<m){
        if( arr1[i] < arr2[j]){
            arr3{k++} = arr2{i++};


        }
        else{
            arr3[k++] = arr1[i++];
        }
    } 
    while(i < n )
    {
       arr3[k++]= arr1[i++];
    }
    while(j<n){
        arr2[k] < arr2[j];
        k++;
        j++ ; 
    }
    void print(int ans[] , int n ){
        for( int i = 0 ; i <n ; i++){
            cout << ans[i]<< " ";
        }
        cout << endl ;
    }




int main(){
    int arr1[6] = { 9  , 3 ,4 , 5, 6, } ; 
    int arr2[4] = { 4 , 9 , 8 , 4};
    int arr3[1] = {0}; 
    merge(arr1 , 5  , arr2 , 4 , arr3);
    print(arr3 , 9);
    return 0 ;

}
}