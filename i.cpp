#include<iostream>

using namespace std;

int main(){
	int n = 0;
	int all = 0;
	int max = 0;
	int min = 100000;
	int in = 0;
	int ans = 0;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> in;
		all = all + in;
		if(in>max){
			max = in;
		} 
		if(in<min){
			min = in;
		}
	}
	ans = (all-max-min)/(n-2);
	cout << ans;
	
	return 0;
}