// linear search  : It is the search in whic the approch is iterative and all the elements are being iteraeed line by line to get the anser 
// linear search has the worst case time compleity brcause if we want ot search for a elemnt at the last we have to iterate through al the elements 
// for(int i = 0 ; i < n ; i++){
//     if arr[0] == key[i]{
//         return 0 ; 
//     }
// }
// BINARY SEARH : element should be here in an monotonic function 
// the step to find the binary search is that first you need to find the middle element the compare the mid element with the previous and the next keys 
// if the middle key is greater than the given value , itearate the revious element and repaeat the same loops again 
// in linear search the time comis O(n) an in binary search the time comp is o(log(N))

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    // size is the upper limit 
    int start = 0;
    int end = size-1;
    // tep1 : find the middle element 
    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}