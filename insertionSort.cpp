#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void insertionSort(int a[], int n) {
	for(int i=1; i<n; i++) {
		int j=i-1;
		int no = a[i];
		while(j >= 0 && a[j] > no) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = no;
	}
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
	
	insertionSort(a, n);
	
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}

	#ifndef ONLINE_JUDGE
        cout << "\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
	return 0;
}

