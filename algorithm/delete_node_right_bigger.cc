/*
 * =====================================================================================
 *
 *       Filename:  delete_node_right_bigger.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/12/16 11:39:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

typedef int NodeVal;
struct Node {
    Node* next;
    int val;
    Node(NodeVal valpara):
        val(valpara) {}
};

Node* deleteNodeRightBigger(Node* link) {
    Node* pre = NULL;
    Node* cur = link;
    Node* post = link -> next;
    Node* head = NULL;
    // find the head
    while(cur && post) {
        if(post->val > cur->val) {
            // delete cur node;
            if (NULL == pre) {  // no head;
                Node* tmp = cur;
                delete tmp;
                cur = post;
                post = post -> next;
            } else {
                Node* tmp = cur;
                delete tmp;
                cur = post;
                post = post -> next;
                pre -> next = cur;
            }
        } else {
            if (NULL == pre)
                head = cur;
            pre = cur;
            cur = post;
            post = post -> next;
        }
    }
    return head;
}


int main(int argc ,char* argv[]) {
    Node* head = new Node(5);   
    Node* node1 = new Node(6);   
    Node* node2 = new Node(7);   
    Node* node3 = new Node(2);   
    Node* node4 = new Node(1);   

    head -> next = node1;
    node1-> next = node2;
    node2-> next = node3;
    node3-> next = node4;

    Node* newList = deleteNodeRightBigger(head);
    Node* tmp = newList;
    while(tmp) {
        cout << tmp->val << endl;
        tmp = tmp -> next;
    }

    return 0;
}
