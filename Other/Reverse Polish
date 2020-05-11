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

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string in;
	getline(cin, in);
	
	stack<int> nums;
	for(int i = 0; i < in.length(); i++){
		if(in[i] != ' '){
		
		if(nums.size() == 2){
			
			int b = nums.top();
			nums.pop();
			int a = nums.top();
			nums.pop();
			switch(in[i]){
				case '*': nums.push(a * b);
						break;
				case '+': nums.push(a + b);
						break;
				case '-': nums.push(a - b);
						break;
			}
			
		}
		
		if(in[i] >= '0' && in[i] <= '9'){
			nums.push(in[i] - '0');
		}
		
	}
}
	cout << nums.top() << "\n";
	

	return 0;
}
