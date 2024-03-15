#include <bits/stdc++.h>
using namespace std;

const int N = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
 	cin.tie(0); 
 	cout.tie(0);
 	
	vector<int> arr = {4,6,2,7,5};
	sort(arr.begin(), arr.end());
	int budget = 11;
	int total_count = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(budget >= arr[i]){
			budget -= arr[i];
			total_count += 1;
		}
	}
	cout << total_count << endl;
	return 0;
	
}