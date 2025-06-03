#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {5, 1, 3, 9, 11};
	
	sort(v.begin(), v.end(), [](const int &u, const int &v){
		return u > v;
	}); 
	
	for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
	
	return 0;
} 
