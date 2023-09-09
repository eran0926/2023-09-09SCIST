#include<iostream>

using namespace std;

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a>b){
		tmp = b;
		b = a;
		a = tmp;
	}
	if (b>c){
		tmp = c;
		c = b;
		b = tmp;
	} 
	
	if(a + b <= c ){ 
		cout << "OAO";
	}
	else if(a == b && b == c){
		cout << "Equilateral triangle";
	}
	else if(a==b || b==c || a==c){
		cout << "Isosceles triangle";
	}
	else{
		cout << "Scalene triangle";
	}
	

	return 0;
}

