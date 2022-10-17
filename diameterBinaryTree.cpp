#include<bits/stdc++.h>
using namespace std;

// 3 4 -1 6 -1 -1 5 1 -1 -1 -1
// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

class node {
	public:
		int data;
		node* left;
		node* right;
		
		node(int data) {
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};

node* buildTree() {
	int d;
	cin>>d;
	
	if (d == -1) {
		return NULL;
	}
	
	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

int height(node* root) {
	if (root == NULL) {
		return 0;
	}
	
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls, rs) + 1;
}

// Preorder traversal
// O(n^2)
int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	int op1 = h1 + h2;
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	
	return max(op1, max(op2, op3));
}

class Pair {
	public:
		int height;
		int diameter;
};

// O(n)
Pair fastDiameter(node* root) {
	Pair p;
	if (root == NULL) {
		p.diameter = p.height = 0;
		return p;
	}
	
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);
	
	p.height = max(left.height, right.height) + 1;
	p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
	return p;
}

int main() {
	
	node* root = buildTree();
	Pair p = fastDiameter(root);
	cout<<p.height<<endl;
	cout<<p.diameter<<endl;

	return 0;
}

