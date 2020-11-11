#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> _remove_duplicates(vector<int> arr){

	vector<int> res;

	// sort 
	
	sort(arr.begin(), arr.end());

	// if cur equ to prev remove
	
	res.push_back(arr[0]);

	for(int i=1; i < arr.size(); i++){
		if(arr[i] != arr[i-1]){
			res.push_back(arr[i]);
		}
	}


	return res;
}

int main(int argc, char** argv){

	vector<int>arr =  {10, 20, 10, 30, 50, 50, 60};

	// remove duplicates
	arr = _remove_duplicates(arr); 

	for (int i = 0; i < arr.size() ; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
}
