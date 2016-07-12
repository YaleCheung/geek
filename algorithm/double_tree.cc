/*
 * =====================================================================================
 *
 *       Filename:  double_tree.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/04/16 16:00:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <queue>
using namespace std;

template<typename T>
struct Node {
    Node(T data):
        val(data), left(NULL), right(NULL) {}
    typedef T value_type;
    Node* left;
    Node* right;
    value_type val;
};

template<typename T>
class Tree {
// temple public for test;
public:
    Node<T>* head;
public:
    void Double(Node<T>*);
    void print() {
        queue<Node<T>*> queue;
        queue.push(head);
        while(! queue.empty()) {
            Node<T>* cur = queue.front();
            cout << cur->val<< " ";
            queue.pop();
            if (cur->left)
                queue.push(cur->left);
            if (cur->right)
                queue.push(cur->right);
        }
    }
};

template<typename T>
void Tree<T>::Double(Node<T>* tree) {
    if (NULL == tree)
        return;
    T data = tree->val;
    Node<T>* left = tree->left;
    Node<T>* right = tree->right;
    Node<T>* double_node = new Node<T>(data);
    tree->left = double_node;
    double_node->left = left;
    Double(left);
    Double(right);
}


int main(int argc, char* argv[]) {
    Node<char>* head = new Node<char>('1');
    Node<char>* l1 = new Node<char>('2');
    Node<char>* l2 = new Node<char>('3');
    Node<char>* r1 = new Node<char>('4');
    Node<char>* r2 = new Node<char>('5');
    Node<char>* r3 = new Node<char>('6');
    head->left = l1;
    head->right = r1;
    l1->left = l2;
    r1->left = r2;
    r2->right = r3; 
    Tree<char> tree;
    tree.head = head;
    tree.print();
    tree.Double(tree.head);
    cout << endl;
    tree.print();
    cout << endl;
    return 0;
}

