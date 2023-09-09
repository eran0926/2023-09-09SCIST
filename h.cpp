#include<iostream>

using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int in=0;
	int min = 0;
	cin >> in;
	min = in;
	for(int i=0;i<n-1;i++){
		cin >> in;
		if(in<min){
			min = in;
		}
	}
	cout << min;
	
	return 0;
}


















