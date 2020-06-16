#include<iostream>
using namespace std;

int main(){
	long long N;
	cin>>N;
	N = N%60;
	
	long long sum=0;

	if(N<=1){
		cout<<N%10;
	}else{
		long long a=0, b=1;
		sum = a + b;
		long long fibonacci = 0;
		for(int i=1; i<N; i++){
			fibonacci = a+b;
			fibonacci %= 10;
			a = b;
			b = fibonacci;
			sum += fibonacci;
		}
		cout<<sum%10;
	}
	
	return 0;
}