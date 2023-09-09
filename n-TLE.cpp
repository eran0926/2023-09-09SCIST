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
	int q;
	int s, e;
	int sim = 0;
	cin >> q;
	
	for(int i=0; i<q; i++){
		sim = 0;
		cin >> s;
		cin >> e;
		for(int j=s-1; j<e; j++){
			sim += sim_arr[j];
		}
		cout << sim << "\n";
	}
		
}