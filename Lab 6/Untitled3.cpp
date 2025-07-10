#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert at the end
void insertAtEnd(Node*& head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

   
    if (head == nullptr) {
       print("The list is empty");
        return;
    }
    int pos;
    cout<<"Enter the position to want"<<endl;
    cin>>pos;
    
    

    
    Node* temp = head;
    for(int i=0;i<pos;i++)
    {
    	temp=temp->next;
    	if(temp->next==NULL)
    	{
    		cout<<"position not foumd";
		}
		newnode->next=temp->next;
		 temp->next = newNode; 
	}
}

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Driver code
int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Linked List: ";
    printList(head);

    return 0;
}

