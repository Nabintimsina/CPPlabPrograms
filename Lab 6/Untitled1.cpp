#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning.\n", data);
}

void deleteAtKth(struct Node** head, int k) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    if (k == 1) {
        *head = temp->next;
        printf("Deleted node at position %d with data %d.\n", k, temp->data);
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < k - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position %d is out of bounds.\n", k);
        return;
    }
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    printf("Deleted node at position %d with data %d.\n", k, nodeToDelete->data);
    free(nodeToDelete);
}

void deleteAtLast(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    if ((*head)->next == NULL) {
        printf("Deleted node with data %d from the last.\n", (*head)->data);
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* second_last = *head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    printf("Deleted node with data %d from the last.\n", second_last->next->data);
    free(second_last->next);
    second_last->next = NULL;
}

void insertAtEnd(struct Node** head, int data) {
    printf("Function 'insertAtEnd' is not yet implemented.\n");
}

void insertAtKth(struct Node** head, int k, int data) {
    printf("Function 'insertAtKth' is not yet implemented.\n");
}

void deleteAtFront(struct Node** head) {
    printf("Function 'deleteAtFront' is not yet implemented.\n");
}

void updateNode(struct Node* head, int k, int newData) {
    printf("Function 'updateNode' is not yet implemented.\n");
}

void printList(struct Node* node) {
    if (node == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    printList(head);

    deleteAtKth(&head, 2);
    printList(head);

    deleteAtLast(&head);
    printList(head);

    insertAtEnd(&head, 99);
    insertAtKth(&head, 1, 88);
    deleteAtFront(&head);
    updateNode(head, 1, 77);
    
    printList(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning.\n", data);
}

void deleteAtKth(struct Node** head, int k) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    if (k == 1) {
        *head = temp->next;
        printf("Deleted node at position %d with data %d.\n", k, temp->data);
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < k - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position %d is out of bounds.\n", k);
        return;
    }
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    printf("Deleted node at position %d with data %d.\n", k, nodeToDelete->data);
    free(nodeToDelete);
}

void deleteAtLast(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    if ((*head)->next == NULL) {
        printf("Deleted node with data %d from the last.\n", (*head)->data);
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* second_last = *head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    printf("Deleted node with data %d from the last.\n", second_last->next->data);
    free(second_last->next);
    second_last->next = NULL;
}

void insertAtEnd(struct Node** head, int data) {
    printf("Function 'insertAtEnd' is not yet implemented.\n");
}

void insertAtKth(struct Node** head, int k, int data) {
    printf("Function 'insertAtKth' is not yet implemented.\n");
}

void deleteAtFront(struct Node** head) {
    printf("Function 'deleteAtFront' is not yet implemented.\n");
}

void updateNode(struct Node* head, int k, int newData) {
    printf("Function 'updateNode' is not yet implemented.\n");
}

void printList(struct Node* node) {
    if (node == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    printList(head);

    deleteAtKth(&head, 2);
    printList(head);

    deleteAtLast(&head);
    printList(head);

    insertAtEnd(&head, 99);
    insertAtKth(&head, 1, 88);
    deleteAtFront(&head);
    updateNode(head, 1, 77);
    
    printList(head);

    return 0;
}
 
