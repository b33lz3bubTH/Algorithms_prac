#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool isPrime(int n){
	if(n == 2) return true;
	if(n%2 == 0) return false;
	for(int i = 3; i<=sqrt(n); i+=2){
		if(!(n%i)) return false;
	}
	return true;
}


int main() {

	vector<int> primeList;
	
	int n = 100;

	for(int i = 2;i < n; i++){
		if(isPrime(i)) primeList.push_back(i);
	}

	for(int i = 0; i < primeList.size(); i++){
		cout << primeList[i] << " " ; 
	}

}
