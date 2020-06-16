#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;

	if(N<=1){
		cout<<N;
	}else{
		long long a=0, b=1;
		long long fibonacci = 0;
		for(int i=1; i<N; i++){
			fibonacci = a+b;
			fibonacci %= 10;
			a = b;
			b = fibonacci;
		}
		cout<<fibonacci;
	}
	
	return 0;
}