#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

typedef struct{
    int data;
    Node* left;
    Node* right;
} Node;

Node tree[10000];

int main(){
    Node* root = NULL;
    int val;
    while(cin >> val){
        if(val == EOF) break;
        root = insertion(root, val);
    }
}

Node* insertion(Node* node, int num){
    if(node == NULL){
        node = new Node();
        node->data = num;
        node->left = node->right = NULL;
    }

    else if(num <= node->data)
        node->left = insertion(node->left, num);
    else
        node->right = insertion(node->right, num);
    return node;
}

void postorder(Node* node){
    if(node->left != NULL)
        postorder(node->left);
    if(node->right != NULL)
        postorder(node->right);

    cout << node->data << '\n';


}

//https://imnotabear.tistory.com/224