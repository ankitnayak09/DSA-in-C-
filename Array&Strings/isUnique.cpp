#include<bits/stdc++.h>

using namespace std;

bool isStringUnique(string str){
	sort(str.begin(),str.end());

	for (int i = 0; i < str.length()-1; i++)
	{
		if(str[i]==str[i+1]) return false;
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