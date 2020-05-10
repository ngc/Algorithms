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
LL n;

string check(int w, LL arr[]){
	
		int i = 0;
		int j = n - 1;
	
		while(i < j){
		
		if(arr[i] + arr[j] == w){
			return to_string(i) + ", " + to_string(j) + " = " + to_string(w) + "\n";
			return 0;
		}
		
		if(arr[i] + arr[j] < w){
			i++;
		}else{
			j--;
		}
		
		
	}
	return "";
}

int main() {

	n = 10;
	LL arr[n];
	for(int i = 0; i < n; i++){
		arr[i] = (2 * i) + 1; 
	}
	sort(arr, arr + n);
	
	for(int i = 0; i < 100; i++){
		
		cout << check(i, arr);
		
	}

    return 0;
}
