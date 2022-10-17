#include<iostream>
#include<stack>
using namespace std;

bool checkExpression(string str) {
	stack<char> s;
	for(int i=0; i<str.length(); i++) {
		char curChar = str[i];
		if (curChar == '(') {
			s.push(curChar);
		} else {
			if (s.empty() || s.top()!='(') {
				return false;
			}
			s.pop();
		}
	}
	
	if (s.empty()) {
		return true;
	} else {
		return false;
	}
}

int main() {

	string expr;
	cin>>expr;
	
	bool isValid = checkExpression(expr);
	if (isValid) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}

	return 0;
}

