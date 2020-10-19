#include <iostream> 
using namespace std; 

/* A binary tree node has data, pointer to left child 
and a pointer to right child */
struct Node 
{ 
	int data; 
	struct Node* left, *right; 
	Node(int data) 
	{ 
		this->data = data; 
		left = right = NULL; 
	} 
}; 

void postorder(struct Node* r) 
{ 
	if (r != NULL) 
	{
	postorder(r->left); //l	
	postorder(r->right);  //r
	cout << r->data << " "; //p
	}
}

void inorder(struct Node* r) 
{ 
	if (r != NULL) 
	{
	inorder(r->left); //l
	cout << r->data << " "; //p
	inorder(r->right);  //r
	}
} 

void preorder(struct Node* r) 
{ 
	if (r != NULL) 
	{
	cout << r->data << " "; //p
	preorder(r->left); //l
	preorder(r->right);  //r
	}
}

int main() 
{ 
	struct Node *root  		= new Node(1); 
	root->left		   		= new Node(2); 
	root->right		   		= new Node(3); 
	root->left->left   		= new Node(4); 
	root->left->right  		= new Node(5); 

	cout << "\nPreorder\n"; 
	preorder(root); 

	cout << "\nInorder\n"; 
	inorder(root); 

	cout << "\nPostorder\n"; 
	postorder(root); 

	return 0; 
} 

