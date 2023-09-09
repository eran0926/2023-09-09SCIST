#include<iostream>

using namespace std;

int main(){
	int n1 = 0;
	int n2 = 0;
	int n = 0;
	cin >> n1;
	cin >> n2;
	n = n1 + n2;
	int arr[n];
	int tmp = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(int j=0; j<n; j++){
		for(int i=0; i<n-j-1; i++){
			if(arr[i]>arr[i+1]){
				tmp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	
}