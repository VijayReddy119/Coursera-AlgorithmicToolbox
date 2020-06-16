#include<iostream>
using namespace std;

int main(){
	long long N;
	cin>>N;
	
	N %= 60;

	if(N<=1){
		cout<<N%10;
	}else{
		long long a=0, b=1;
		long long fibonacci = 0;
		long long sum=a+b;
		for(int i=1; i<N; i++){
			fibonacci = a+b;
			fibonacci %= 10;
			a = b;
			b = fibonacci;

			sum += (fibonacci * fibonacci)%10;
		}
		cout<<sum%10;
	}
	
	return 0;
}