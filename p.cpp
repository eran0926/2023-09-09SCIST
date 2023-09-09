#include<iostream>

using namespace std;
int arr[1000000];
int main(){
	int n, k;
	int score = 0;
	cin >> n;
	cin >> k;
	for (int i = 0; i<n; i++){
		cin >> arr[i];
	}
	int all = 0;
	for (int i = 0; i<n; i++){
		all += arr[i];
	}
	score += all*(k/n);
	
	int s = 0;
	// int s_max_id = 0
	int s_max = 0;
	// cout << k%n << "a\n";
	for (int i = 0; i<n-(k%n); i++){
		 s = 0;
		 for (int j = i; j<(i+(k%n)); j++){
		 	s += arr[j];
		 }
		 if (s>s_max){
		 	s_max = s;
		 	// s_max_id = j;
		 }
	}
	score += s_max;
	cout << score;
}