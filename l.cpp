#include<iostream>

using namespace std;

int main(){
	int s = 0, e = 0, sum = 0;
	int n = 0, q = 0;
	cin >> n;
	cin >> q;
	int arr[n];
	int pre[n];
	pre[0] = 0;
	for(int i = 1; i<=n;i++){
		cin >> arr[i];
	}
	for(int i = 1; i<=n;i++){
		pre[i] = pre[i-1] + arr[i];
	}
	
	for(int j = 0; j<q; j++){
		cin >> s;
		cin >> e;
		cout << pre[e] - pre[s-1] << "\n";
	}
}
