#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k, is_sorted=true;
		cin >> n >> k;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(i > 0 && arr[i-1]>arr[i]) is_sorted=false;
		}
		if(is_sorted || k>1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	return 0;
}