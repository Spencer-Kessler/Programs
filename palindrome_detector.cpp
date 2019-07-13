#include <iostream>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter a string: ";
	string str1;
	cin >> str1;
	string str2 = str1;
	reverse(str2.begin(), str2.end());
	if (str1 == str2) {
		cout << "This is a palindrome.";
	} else {
		cout << "This is not a palindrome.";
	}
}
