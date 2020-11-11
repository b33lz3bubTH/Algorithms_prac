#include <iostream>
#include <vector>
#include <map>
using namespace std;
char _get_first_non_repeat_char(vector<char> arr){
	
	map<char, int> freq;
	// creating the frequency table
	for(int i = 0;i < arr.size(); i++){
		freq[arr[i]]++;
	}
	
	
	// map is hapazad, so traverse, the map with char in arr, and return
	for(int i=0;i < arr.size(); i++){
		if(freq[arr[i]] == 1){
			return arr[i];
		}
	}

	return '\0';
}

int main(int argc, char** argv){

	vector<char>arr =  {'b', 'b', 'b', 'a', 'a','e', 'e', 'g'};

	// remove duplicates
	char res = _get_first_non_repeat_char(arr);

	cout << "NON REPEATING CHAR: " <<  res;

	cout << endl;
}
