#include <iostream>
#include <math.h>
using namespace std;


// Time COMPLEXITY OF SEVE OF ERATHOSTHENESE : N LOG (LOG N) mutters theorem
// SPACE COMPLEXITY O(n) 

int main(){
	int n = 100;

	cout << "Enter UpperBound of the list: ";
	cin >> n;
	int arr[n] = {0}; // this is seve
	// SEVEofErathothenese
	bool flag = true;

	for(int i = 2; i <= sqrt(n); i++){
		if(!flag){
			// AS 2's multiples are strike off we dont need to visit even numbers.
			if(i%2 == 0) {
				cout << "AVOIDNG: " << i << endl;
				continue;
			}
		}
		// striking the multiple of i
		for(int factors = i;;factors++){ //modifiying the seve to tell this is prime or not.
			if(i*factors > n) break;
			arr[i*factors] = -1;
		}
		flag = false;
	}

	for(int i=2;i < n;i++){
		if(arr[i] == 0){
			cout << i << " ";
		}
	}
}