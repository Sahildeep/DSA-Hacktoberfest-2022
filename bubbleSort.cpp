#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void bubbleSort(int a[], int n) {
	bool swap = false;
	for(int i=0; i<n-1; i++) {
		swap = false;
		for(int j=0; j<n-i-1; j++) {
			if (a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				swap = true;
			}
		}
		if (!swap) {
			break;
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a[] = {5, 4, 3, 2, 1, 4};
	int n = sizeof(a)/sizeof(int);
	bubbleSort(a, n);
	
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}

	#ifndef ONLINE_JUDGE
        cout << "\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
	return 0;
}

