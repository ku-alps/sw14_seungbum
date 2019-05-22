// CodeTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



class node {
public:
	int value;
	node* left;
	node* right;

	node(int value) {
		this->value = value;
		this->left = nullptr;
		this->right = nullptr;
	}
	node() {
		this->value = NULL;
		this->left = nullptr;
		this->right = nullptr;
	}

};
class BST {
public:

	node* root;
	node* state;
	int error;
	BST() {
		root = nullptr;
		state = nullptr;
		error = 0;
	}
	void menu();

	bool search(int x,node** last);
	bool insert(int x);
	void track();
	node* movelr(char a);
	//char* input,int size);
	void print();

};



int main()
{
	BST* bst = new BST();
	int times;
	std::cin >> times;
	for (int i = 0; i < times; i++) {
		bst->menu();
	}
	//bst->insert(2);
	//bst->insert(3);
	//bst->insert(4);
	//
	//bst->print();



}
bool BST::insert(int x)
{
	node* last = nullptr;;
	   	
	if (!search(x, &last)) {
	
		if (last == nullptr){
			std::cout << "roots";
			root = new node(x);
			return true;
		}
		if (x > (last->value)) {
			last->right = new node(x);
			std::cout << "right";
			return true;
		}
		else if(x < last->value)
		{
			std::cout << "left";
			last->left = new node(x);
			return true;
		}
	
	}

}
bool BST::search(int x,node** last)
{
	node* tmp = nullptr;
	//last = root;
	tmp = root;
	*last = tmp;
	while (tmp != nullptr) {
		
		if (x > (tmp->value)) {
			 *last = tmp;
			tmp = (*last)->right;
			
		}
		else if (x < tmp->value) {
			*last = tmp;
			tmp = (*last)->left;
		}
		else if (x == tmp->value) {
			*last = tmp;
			return true;
		}

	}
	
	return false;
}


void BST::track()//char* input,int size)
{
	state = root;
	char* input;
	int size =0;
	input = new char[20];
	//for (int i = 0; i < 21; i++) {
		
		std::cin.getline(input,20);
	/*	if (input[i] == 13|| input[i] == 10 || input[i] == 0) {
			size = i;
			break;*/
		
		//}
		
	


	//for (int i = 0; i < size; i++) {
		for(int i=0; input[i] == 13 || input[i] == 10 || input[i] == 0;i++){
			std::cout << state->value << std::endl;;
			std::cout << input[i] << std::endl;
			movelr(input[i]);
		if (state == nullptr) {
			break;
			error++;
		}
		}
//	}

}
node* BST::movelr(char a)//char* input,int size)
{
	if (a == 'l' || a == 'L') {
		state = state->left;
	}
	else if (a == 'r' || a == 'R') {
		state = state->right;
	}
	
	return state;

}


void BST::print() {

	std::cout << root->value <<std::endl;
	std::cout << (root->right)->value <<std::endl;

	std::cout << (root->right)->right->value << std::endl;

}
void BST::menu() {
	char in;
	std::cin >> in;
	if (in == 'i'|| in == 'I') {
		int input;
		std::cin >> input;
		insert(input);
	}
	else if (in == 's'|| in == 'S') {
		std::cout << "track;" << std::endl;
		track();
	}
}
