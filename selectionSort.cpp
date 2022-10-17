#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void selectionSort(int a[], int n) {
	for(int i=0; i<n-1; i++) {
		// Assume the current (ith) is min
		int minIndex = i;
		// Find min element in remaining part
		for(int j=i+1; j<n; j++) {
			if (a[j]<a[minIndex]) {
				minIndex = j;
			}
		}
		// minIndex min element
		swap(a[minIndex], a[i]);
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a[] = {5, 4, 1, 2, 3};
	int n = sizeof(a)/sizeof(int);
	
	selectionSort(a, n);
	
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}

	#ifndef ONLINE_JUDGE
        cout << "\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
	return 0;
}

