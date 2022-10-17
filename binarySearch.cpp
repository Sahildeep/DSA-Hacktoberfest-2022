#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearch(int a[], int n, int key) {
	int left = 0;
	int right = n-1;
	int mid;
	while (left <= right) {
		mid = (left+right)/2;
		if (a[mid] == key) {
			return mid;
		} else if (a[mid] < key) {
			left = mid + 1;
		} else {
			right = mid -1;
		}
	}
	return -1;
}

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
	
	int index = binarySearch(a, n, key);
	
	if (index == -1) {
		cout<<key<<" is not found"<<endl;
	} else {
		cout<<key<<" is found at "<<index<<" position"<<endl;
	}

	return 0;
}

