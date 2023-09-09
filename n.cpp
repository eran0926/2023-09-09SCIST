#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr_a[n], arr_b[n];
	int sim_arr[n];
	for(int i=0; i<n; i++){
		cin >> arr_a[i];
	}
	for(int i=0; i<n; i++){
		cin >> arr_b[i];
		if (arr_a[i] == arr_b[i]){
			sim_arr[i] = 1;
		}
		else{
			sim_arr[i] = 0;
		}
	}
	int pre[n];
	pre[0] = 0;
	for (int i = 1; i<=n; i++){
		pre[i] = pre[i-1] + sim_arr[i-1];
	}
	int q;
	int s, e;
	int sim = 0;
	cin >> q;
	
	for(int i=0; i<q; i++){
		sim = 0;
		cin >> s;
		cin >> e;
		cout << pre[e] - pre[s-1] << "\n";
	}
		
}