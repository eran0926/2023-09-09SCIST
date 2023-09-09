#include<iostream>

using namespace std;

int main(){
	int s = 0, e = 0, sum = 0;
	int n = 0, q = 0;
	cin >> n;
	cin >> q;
	int arr[n];
	for(int i = 0; i<n;i++){
		cin >> arr[i];
	}
	for(int j = 0; j<q; j++){
		cin >> s;
		cin >> e;
		sum = 0;
		for (int arri=s-1;arri<e;arri++){
			sum = sum + arr[arri];
		}
		cout << sum << "\n";
	}
}