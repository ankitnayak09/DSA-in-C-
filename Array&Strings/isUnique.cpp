#include<bits/stdc++.h>

using namespace std;
 
bool isStringUnique(string str){
	if(str.length() > 128) return false;	

	bool char_set[128];

	for(int i=0; i < str.length(); i++){
		if(char_set[i]==0) return false;
	char_set[i] = true;
	}
	return true;
}
int main() {

	string s;
	cin >> s;

	if(isStringUnique(s)) cout << "Unique";
	else cout << "Not Unique";
	return 0;
}