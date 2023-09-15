#include<iostream>

using namespace std;
long long r_arr[1000000];
long long arr[1000000];
long long pre_arr[1000000];
int n, k;
long long score = 0;
int s = 0, e = 0, sum = 0;
// int s_max_id = 0
int s_max = 0;
int main(){
	cin >> n;
	cin >> k;
	for (int i = 0; i<n; i++){
		cin >> r_arr[i];
	}
	
	for (int i = 0; i<n; i++){
	    if (r_arr[i]-(k/n) < 0){
	        score += r_arr[i]*(r_arr[i]+1)/2;
	        arr[i] = 0;
	    }
	    else {
	        score += (k/n)*(r_arr[i] + r_arr[i]-k/n+1)/2;
	        arr[i] = r_arr[i]-(k/n);
	    }
	}
	pre_arr[0] = 0;
	// cout << k%n << "a\n";
	for (int i = 1; i<=n; i++){
		 pre_arr[i] = pre_arr[i-1] + arr[i-1];
	}
		 
	for (int i = 1; i<=n; i++){
	    s = i - 1;
	    e = i + k%n - 1;
	    sum = 0;
	    if (e > n){
	        sum += pre_arr[n] - pre_arr[s];
	        sum += pre_arr[e%n] - pre_arr[0];
	    }
	    else{
	        sum += pre_arr[e] - pre_arr[s];
	    }
	    if(sum > s_max){
	        s_max = sum;
	    }
	}
	//cout << score <<endl;
	//cout << s_max <<endl; 
	score += s_max;
	cout << score;
}