#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	int key;
	cin>>key;
	int i;
	for(i=0; i<n; i++) {
		if (key == a[i]) {
			cout<<"Found at index "<<i<<endl;
			break;
		}
	}

	if (i==n) {
		cout<<key<<" is not present"<<endl;
	}

	return 0;
}

