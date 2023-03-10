#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
void push(int new_data,Node** head)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
int main()
{
    Node* head = NULL;
    int n,x;
    cout<<"How Many Numbers you want to enter"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter " <<i+1<<" the number:"<<endl;
        cin>>x;
        push(x,&head);
        cout<<"Created Linked list is:"<<endl;
        printList(head);
        cout<<endl;
    }

    return 0;
}
