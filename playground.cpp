#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	  std::vector<int> v = {1,2,3,4,5,6,7,8,9};

	for (int b : v){
		cout << b << " ";
	}

	cout << "\n";

	  swap(v[0], v[3]);
	for (int b : v){
		cout << b << " ";
	}
	cout << "\n";
	  return 0;
}
