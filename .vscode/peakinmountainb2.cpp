#include<vector>
using namespace std;

class Solution {
public:
// here the status is that first the elents are increased than there comes a peak point such that ad then it suddenly falls down 
//  First while goes up : arr[i]<arr[i+1] (uppar jaane ke lia) 
// second while goes dowm : arr[i]>arr[i+1]
// arr[i-1]<arr[i]>arr[i+1]
  
    int find_pivot(vector<int> v)
{
	int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e)
	{
		if(v[mid] < v[mid+1])
     s=mid+1;
    else
      e = mid;
    
		mid = (s + e) / 2;
	}
	return s;
}
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};