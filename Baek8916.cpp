// Baek8916.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
class Node{
public:
	Node* left;
	Node* right;
	int key;

	Node() {
		left = nullptr;
		right = nullptr;
		key = NULL;
	}
	Node(int key) {
		left = nullptr;
		right = nullptr;
		this->key = key;
	}

};

class BinaryTree {
public:
	Node* root;
public:
	BinaryTree() {
		root = nullptr;
	}

	int search(int x,Node **last) {
		Node* p = nullptr;
		Node* q = nullptr;
		p = root;

		while (p != nullptr) {

			if (p->key < x) {
				q = p;
				p= p->right;

			}
			else if (p->key > x) {
				q = p;
				p = p->left;

			}
			else {
				*last = p;
				return 1;

			}

		}

		(*last) = q;
		return 0;
	}
	void insert(int x) {
		Node* last = nullptr;
	
		if (root == nullptr) {
			root = new Node(x);
			return;
		}

		if (search(x, &last)) {
			return;

		}
		else {
			if (last->key > x) {
				last->left = new Node(x);
			}
			else if (last->key < x) {
				last->right = new Node(x);
			}
			
		}
	
	}


};

int main()
{
	BinaryTree bt;
	bt.insert(2);
	bt.insert(1);
	bt.insert(4);
	bt.insert(3);
	bt.insert(5);

	cout << bt.root->key;
	cout << bt.root->left->key;
	cout << bt.root->right->key;
	cout << bt.root->right->left->key;
	cout << bt.root->right->right->key;


}
