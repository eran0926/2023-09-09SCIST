#include<iostream>

using namespace std;

int main(){
	char st[6] = "Scist";
	int n = 0;
	cin  >> n;
	cout << st[(n-1)%5];

	return 0;
}

