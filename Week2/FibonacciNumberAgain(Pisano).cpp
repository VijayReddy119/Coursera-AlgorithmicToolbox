//Pisano Period
#include<iostream>
using namespace std;

long long PisanoPeriod(long long m) {
    long long a = 0, b = 1, fibo_pisano = a + b;
    for (int i = 0; i < m * m; i++) {
        fibo_pisano = (a + b) % m;
        a = b;
        b = fibo_pisano;
        if (a == 0 && b == 1) 
        	return i + 1;
    }
    return fibo_pisano;
}

int main()
{
	long long n, m;
	cin>>n>>m;
    	
	long long remainder = n % PisanoPeriod(m);
    long long a = 0, b = 1, fibo_res;

    for (int i = 0; i <= remainder; i++) {
        fibo_res = (a + b) % m;
        a = b;
        b = fibo_res;
    }

    cout<<b%m;

	return 0;
}