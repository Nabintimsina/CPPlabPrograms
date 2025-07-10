#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at beginning
Node* insertAtBeginning(Node* head, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = head;
    return newNode;
}

// Insert at end
Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Insert at specified position
Node* insertAtPosition(Node* head, int val, int pos) {
    if (pos == 1) {
        return insertAtBeginning(head, val);
    }

    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Position out of range, inserting at end instead." << endl;
        return insertAtEnd(head, val);
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Delete at beginning
Node* deleteAtBeginning(Node* head) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete.\n";
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Delete at end
Node* deleteAtEnd(Node* head) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete.\n";
        return NULL;
    }
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

// Delete at specified position 
Node* deleteAtPosition(Node* head, int pos) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete.\n";
        return NULL;
    }
    if (pos == 1) {
        return deleteAtBeginning(head);
    }

    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of range. No deletion performed.\n";
        return head;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    return head;
}

// Print list
void printList(Node* head) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    int choice, val, pos;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at position\n";
        cout << "4. Delete at beginning\n";
        cout << "5. Delete at end\n";
        cout << "6. Delete at position\n";
        cout << "7. Print list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> val;
                head = insertAtBeginning(head, val);
                break;

            case 2:
                cout << "Enter value to insert at end: ";
                cin >> val;
                head = insertAtEnd(head, val);
                break;

            case 3:
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (starting from 1): ";
                cin >> pos;
                head = insertAtPosition(head, val, pos);
                break;

            case 4:
                head = deleteAtBeginning(head);
                break;

            case 5:
                head = deleteAtEnd(head);
                break;

            case 6:
                cout << "Enter position to delete (starting from 1): ";
                cin >> pos;
                head = deleteAtPosition(head, pos);
                break;

            case 7:
                cout << "Current list: ";
                printList(head);
                break;

            case 8:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

