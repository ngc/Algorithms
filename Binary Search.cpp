#include <bits/stdc++.h>
using namespace std;

typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<LL> vl; 
typedef vector<vl> vvl;

int binarysearch(int arr[], int target, int size){
	
	int low = 0;
	int high = size - 1;
	
	while(low <= high){
	//	cout << "LOW = " << arr[low] << " | HIGH = " << arr[high] << "\n";
		int mid = (low + high) / 2;
		
		if(arr[mid] == target)return mid; //<true, mid>
		if(arr[high] == target)return high; //<true, high>
		if(arr[low] == target)return low; //<true, low>
		
		if(target > arr[mid]){
			low = mid;
		}else{
			high = mid;
		}
		
		if(high - low == 1){
			return 0; //Or return a pair consisting of a bool and an int, <false, 0>
		}
		
	}
	
	return 0;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int arr[100000];
	for(int i = 0; i < 100000; i++){
		arr[i] = i;
	}
	sort(arr, arr + 100000);
		
	for(int i = 0; i < 100000; i+=1000){
		cout << arr[binarysearch(arr, i, 100000)] << "\n";
	}	

	return 0;
}
