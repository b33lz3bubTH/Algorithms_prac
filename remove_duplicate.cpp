#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> _remove_duplicates(vector<int> arr){

	set<int> s;
	vector<int> res;

	for(int i=0;i < arr.size(); i++){
		if(s.find(arr[i]) == s.end()){
			// not in set
			s.insert(arr[i]);
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
