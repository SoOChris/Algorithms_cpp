#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int l, int r, int x){
	
	if(r >= l)
	{
		int mid = l + (r - 1)/2;
		if(arr[mid] == x)
		{
			return mid;
		}
		if(arr[mid] > x)
		{
			return binarySearch(arr, l, mid-1,x);
		}
		
		return binarySearch(arr, mid + 1,r,x);
	}
	
    return -1;
}
  

int main(void)
{
	int arr[] = {1,2,3,4,5};
	int target = 3;
	int last = sizeof(arr)/sizeof(arr[0]);
	int result = binarySearch(arr,0,last-1,target);
	
	cout << "Index: " << result;
	return 0;
}
