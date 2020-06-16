#include<iostream>
using namespace std;

int main(){
	long long a,b;

	cin>>a>>b;

	if(a==1){
		cout<<a;
	}else if(b==1){
		cout<<b;
	}else{
		while(a!=b){
			if(a>b)
				a= a-b;
			else
				b = b-a;
		}
		cout<<a;
	}

	return 0;
}