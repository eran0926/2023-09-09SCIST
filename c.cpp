#include<iostream>

using namespace std;

int main(){
	int n = 0;
	int a[5] {4, 8, 7, 6, 3};
	int all = 1;
	cin >> n;
	cout << a[n%5] << " ";
	a[n%5] = a[n%5] + n;
	cout << a[(a[n%5])%5] << " ";
	a[(a[n%5])%5] = a[(a[n%5])%5] + n;
	for (int i = 0;i<5;i++){
		all = all * a[i];
	}
	cout << all;

	return 0;
}

