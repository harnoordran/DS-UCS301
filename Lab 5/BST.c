#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	
	
} Node;


Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	//Create a new node dynamically in memory and give me a pointer to it.
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	
	return newNode;
}

Node* insertNode(int data, Node* root){

	
	if(root == NULL){
		return createNode(data);
	}
	
	if(data < root->data){
		
		Node* nn = insertNode(data, root->left);
		root->left = nn;
		
	}
	if(data > root->data){
		Node* nn = insertNode(data, root->right);
		root->right = nn;
		
	}
	return root;
}


void inorder(Node* root){
	if(root != NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
		
	}
	
}


void postorder(Node* root){
	
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
		
	}
	
}

void preorder(Node* root){
	
	
	if(root != NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
		
	}
	
}

Node* searchRec(Node* root, int key){
	if(root!=NULL){
		if(root->data == key){
			return root;
		}
		else if(root->data < key)
		{
			return searchRec(root->right,key);
		}
		else{
			return searchRec(root->left, key);
		}
	}
	
}
Node* searchIter(Node* root, int key){
	while(root != NULL){
		if(root->data == key){
			return root;
		}
		else if(root->data < key){
			root = root->right;
		}
		else{
			root = root->left;
		}
	}
}

Node* findMin(Node* root){
	while(root && root->left != NULL){
		root = root->left;
	}
	
	return root;
	
}

Node* findMax(Node* root){
	while(root && root->right != NULL){
		root = root->right;
	}
	
	return root;
}

Node* findSuc(Node* root,Node* n){
	
	if(n->right){
		return findMin(n->right);
	}
	Node* succ = NULL;
	
	while(root != NULL && root != n){
		if(root->data > n->data){
			succ = root;
			root = root->left;
		}
		else if(root->data < n->data){
			root = root->right;
		}
		
	}
	
	return succ;

	
}

Node* findPred(Node* root,Node* n){
	
	if(n->left){
		return findMax(n->left);
	}
	Node* pred = NULL;
	
	while(root != NULL && root != n){
		if(root->data > n->data){
			
			root = root->left;
		}
		else if(root->data < n->data){
			pred = root;
			root = root->right;
		}
		
	}
	
	return pred;
}
int main(){
	Node* root = NULL;
	root = insertNode(70, root);
	insertNode(65, root);
	insertNode(68, root);
	insertNode(76, root);
	insertNode(56, root);
	insertNode(79, root);
	insertNode(85, root);
	
	printf("\nPreOrder: \n");
	
	preorder(root);
	printf("\nInOrder: \n");
	inorder(root);
	
	
	printf("\nPostOrder: \n");
	postorder(root);
	
	int key = 65;
	Node* searchVal = searchIter(root, key);
	
	if(searchVal){
		printf("\n%d found in the BST ", key);
	}
	else{	
		printf("\n%d not found in the BST ", key);
	}
	
	Node* minNode = findMin(root);
	printf("\nMin Value is %d",minNode->data);
	Node* maxNode = findMax(root);
	
	printf("\nMax Value is %d",maxNode->data);
	
	
	
	printf("\nInorder Successor is %d", (findSuc(root,searchVal)->data));
	printf("\nInorder Predecessor is %d", (findPred(root,searchVal)->data));
	
	
}