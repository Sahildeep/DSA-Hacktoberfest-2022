#include<iostream>
#include<vector>
using namespace std;

// Implementation of heap using vector (Dynamic Array)

class Heap {
	vector<int> v;
	bool minHeap;
	
	bool compare(int a, int b) {
		if (minHeap) {
			return a<b;
		} else {
			return a>b;
		}
	}
	
	void heapify(int i) {
		int left = 2*i;
		int right = 2*i+1;
		// Assume current is min
		int minIndex = i;
		if (left < v.size() && compare(v[left], v[minIndex])) {
			minIndex = left;
		}
		if (right < v.size() && compare(v[right], v[minIndex])) {
			minIndex = left;
		}
		if (minIndex != i) {
			swap(v[i], v[minIndex]);
			heapify(minIndex);	
		}
	}
	
	public:
		Heap(bool type = true) {
			minHeap = type;
			// Block the 0th index
			v.push_back(-1);
		}
		
		void push(int data) {
			// Insert at last
			v.push_back(data);
			// Take that element to correct position, restore the heap property
			int index = v.size() - 1;
			int parent = index / 2;
			while (index>1 && compare(v[index], v[parent])) {
				swap(v[index], v[parent]);
				index = parent;
				parent = parent/2;
			}
		}
		
		bool empty() {
			return v.size() == 1;
		}
		
		int top() {
			return v[1];
		}
		
		void pop() {
			// Remove the topmost element
			int last = v.size() - 1;
			swap(v[1], v[last]);
			v.pop_back();
			heapify(1);			// From which node it starts doing heapify
		}
};

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	Heap h(false);
	h.push(5);
	h.push(15);
	h.push(2);
	h.push(20);
	h.push(3);

	cout<<h.top()<<endl;
	while(!h.empty()) {
		cout<<h.top()<<" ";
		h.pop();
	}

	return 0;
}

