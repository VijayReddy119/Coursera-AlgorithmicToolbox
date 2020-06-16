#include<iostream>
using namespace std;

long long computeGCD(long long a, long long b){
	while(a!=b){
		if(a>b)
			a= a-b;
		else
			b = b-a;
	}

	return a;
}

int main(){
	long long a,b;

	cin>>a>>b;

	long long lcm = (a*b) / computeGCD(a,b);

	cout<<lcm;
	return 0;
}