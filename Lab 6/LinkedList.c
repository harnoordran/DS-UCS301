#include <stdio.h>
#include <stdlib.h>
//
//
// Question 1
//typedef struct Node {
//    int data;
//    struct Node *next;
//} Node;
//
//Node *head = NULL;
//
//Node *createNode(int data) {
//    Node *newnode = (Node *)malloc(sizeof(Node));
//    newnode->data = data;
//    newnode->next = NULL;
//    return newnode;
//}
//
//void insertFront(int data) {
//    Node *newnode = createNode(data);
//    if (head == NULL) {
//        head = newnode;
//        head->next = head;
//        return;
//    }
//    Node *temp = head;
//    while (temp->next != head)
//        temp = temp->next;
//
//    newnode->next = head;
//    temp->next = newnode;
//    head = newnode;
//}
//
//void insertEnd(int data) {
//    Node *newnode = createNode(data);
//    if (head == NULL) {
//        head = newnode;
//        head->next = head;
//        return;
//    }
//    Node *temp = head;
//    while (temp->next != head)
//        temp = temp->next;
//
//    temp->next = newnode;
//    newnode->next = head;
//}
//
//void insertAfter(int key, int data) {
//    if (head == NULL) return;
//
//    Node *temp = head;
//    do {
//        if (temp->data == key) {
//            Node *newnode = createNode(data);
//            newnode->next = temp->next;
//            temp->next = newnode;
//            return;
//        }
//        temp = temp->next;
//    } while (temp != head);
//
//    printf("Node %d not found.\n", key);
//}
//
//void insertBefore(int key, int data) {
//    if (head == NULL) return;
//
//    Node *temp = head, *prev = NULL;
//    do {
//        if (temp->data == key) {
//            Node *newnode = createNode(data);
//            if (prev == NULL) { // insert before head
//                insertFront(data);
//                return;
//            }
//            newnode->next = temp;
//            prev->next = newnode;
//            return;
//        }
//        prev = temp;
//        temp = temp->next;
//    } while (temp != head);
//
//    printf("Node %d not found.\n", key);
//}
//
//void deleteNode(int key) {
//    if (head == NULL) return;
//
//    Node *temp = head, *prev = NULL;
//
//    do {
//        if (temp->data == key) {
//            if (temp == head) { // deleting head
//                Node *last = head;
//                while (last->next != head)
//                    last = last->next;
//
//                if (last == head) { // only one node
//                    free(head);
//                    head = NULL;
//                    return;
//                }
//
//                head = head->next;
//                last->next = head;
//                free(temp);
//                return;
//            } else {
//                prev->next = temp->next;
//                free(temp);
//                return;
//            }
//        }
//        prev = temp;
//        temp = temp->next;
//    } while (temp != head);
//
//    printf("Node %d not found.\n", key);
//}
//
//void searchNode(int key) {
//    if (head == NULL) {
//        printf("List empty\n");
//        return;
//    }
//
//    Node *temp = head;
//    do {
//        if (temp->data == key) {
//            printf("Node %d found\n", key);
//            return;
//        }
//        temp = temp->next;
//    } while (temp != head);
//
//    printf("Node %d not found\n", key);
//}
//
//void display() {
//    if (head == NULL) {
//        printf("List empty\n");
//        return;
//    }
//
//    Node *temp = head;
//    do {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    } while (temp != head);
//    printf("\n");
//}
//
//int main() {
//    int ch, val, key;
//
//    while (1) {
//        printf("\n--- CIRCULAR LINKED LIST MENU ---\n");
//        printf("1 Insert Front\n2 Insert End\n3 Insert After\n4 Insert Before\n5 Delete Node\n6 Search\n7 Display\n8 Exit\n");
//        printf("Enter choice: ");
//        scanf("%d", &ch);
//
//        switch (ch) {
//        case 1:
//            printf("Enter value: ");
//            scanf("%d", &val);
//            insertFront(val);
//            break;
//        case 2:
//            printf("Enter value: ");
//            scanf("%d", &val);
//            insertEnd(val);
//            break;
//        case 3:
//            printf("Enter node after which to insert: ");
//            scanf("%d", &key);
//            printf("Enter new value: ");
//            scanf("%d", &val);
//            insertAfter(key, val);
//            break;
//        case 4:
//            printf("Insert before which value? ");
//            scanf("%d", &key);
//            printf("Enter new value: ");
//            scanf("%d", &val);
//            insertBefore(key, val);
//            break;
//        case 5:
//            printf("Enter node to delete: ");
//            scanf("%d", &key);
//            deleteNode(key);
//            break;
//        case 6:
//            printf("Search value: ");
//            scanf("%d", &key);
//            searchNode(key);
//            break;
//        case 7:
//            display();
//            break;
//        case 8:
//            return 0;
//        }
//    }
//}



// DOUBLE LINKED LIST
//
//typedef struct Node {
//    int data;
//    struct Node *prev, *next;
//} Node;
//
//Node *head = NULL;
//
//Node *createNode(int data) {
//    Node *newnode = (Node *)malloc(sizeof(Node));
//    newnode->data = data;
//    newnode->prev = newnode->next = NULL;
//    return newnode;
//}
//
//void insertFront(int data) {
//    Node *newnode = createNode(data);
//    if (head != NULL)
//        head->prev = newnode;
//    newnode->next = head;
//    head = newnode;
//}
//
//void insertEnd(int data) {
//    Node *newnode = createNode(data);
//    if (head == NULL) {
//        head = newnode;
//        return;
//    }
//    Node *temp = head;
//    while (temp->next != NULL)
//        temp = temp->next;
//
//    temp->next = newnode;
//    newnode->prev = temp;
//}
//
//void insertAfter(int key, int data) {
//    Node *temp = head;
//    while (temp != NULL && temp->data != key)
//        temp = temp->next;
//
//    if (!temp) return;
//
//    Node *newnode = createNode(data);
//    newnode->next = temp->next;
//    newnode->prev = temp;
//
//    if (temp->next != NULL)
//        temp->next->prev = newnode;
//
//    temp->next = newnode;
//}
//
//void insertBefore(int key, int data) {
//    if (head == NULL) return;
//
//    if (head->data == key) {
//        insertFront(data);
//        return;
//    }
//
//    Node *temp = head->next;
//    while (temp != NULL && temp->data != key)
//        temp = temp->next;
//
//    if (!temp) return;
//
//    Node *newnode = createNode(data);
//    newnode->next = temp;
//    newnode->prev = temp->prev;
//    temp->prev->next = newnode;
//    temp->prev = newnode;
//}
//
//void deleteNode(int key) {
//    Node *temp = head;
//
//    while (temp != NULL && temp->data != key)
//        temp = temp->next;
//
//    if (!temp) return;
//
//    if (temp->prev != NULL)
//        temp->prev->next = temp->next;
//    else
//        head = temp->next;
//
//    if (temp->next != NULL)
//        temp->next->prev = temp->prev;
//
//    free(temp);
//}
//
//void search(int key) {
//    Node *temp = head;
//    while (temp != NULL) {
//        if (temp->data == key) {
//            printf("Node found\n");
//            return;
//        }
//        temp = temp->next;
//    }
//    printf("Node not found\n");
//}
//
//void display() {
//    Node *temp = head;
//    while (temp != NULL) {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    }
//}
//
//int main() {
//    int ch, val, key;
//
//    while (1) {
//        printf("\n--- DOUBLY LINKED LIST MENU ---\n");
//        printf("1 Insert Front\n2 Insert End\n3 Insert After\n4 Insert Before\n5 Delete\n6 Search\n7 Display\n8 Exit\n");
//        printf("Enter choice: ");
//        scanf("%d", &ch);
//
//        switch (ch) {
//        case 1:
//            printf("Enter value: ");
//            scanf("%d", &val);
//            insertFront(val);
//            break;
//        case 2:
//            printf("Enter value: ");
//            scanf("%d", &val);
//            insertEnd(val);
//            break;
//        case 3:
//            printf("Insert after which value? ");
//            scanf("%d", &key);
//            printf("Enter new value: ");
//            scanf("%d", &val);
//            insertAfter(key, val);
//            break;
//        case 4:
//            printf("Insert before which value? ");
//            scanf("%d", &key);
//            printf("Enter new value: ");
//            scanf("%d", &val);
//            insertBefore(key, val);
//            break;
//        case 5:
//            printf("Enter value to delete: ");
//            scanf("%d", &key);
//            deleteNode(key);
//            break;
//        case 6:
//            printf("Enter search value: ");
//            scanf("%d", &key);
//            search(key);
//            break;
//        case 7:
//            display();
//            break;
//        case 8:
//            return 0;
//        }
//    }
//}
//

// Question 2


//typedef struct Node {
//    int data;
//    struct Node *next;
//} Node;
//
//Node *head = NULL;
//
//Node* createNode(int x){
//    Node *n = malloc(sizeof(Node));
//    n->data = x;
//    n->next = NULL;
//    return n;
//}
//
//void insertEnd(int x){
//    Node *n = createNode(x);
//    if(!head){
//        head = n;
//        head->next = head;
//        return;
//    }
//    Node *temp = head;
//    while(temp->next != head)
//        temp = temp->next;
//
//    temp->next = n;
//    n->next = head;
//}
//
//void displayRepeat(){
//    if(head == NULL) return;
//
//    Node *temp = head;
//    do {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    } while(temp != head);
//
//    printf("%d\n", head->data);
//}
//
//int main(){
//    insertEnd(20);
//    insertEnd(100);
//    insertEnd(40);
//    insertEnd(80);
//    insertEnd(60);
//
//    displayRepeat();
//}
//


// Question 3



//typedef struct DLL {
//    int data;
//    struct DLL *prev, *next;
//} DLL;
//
//typedef struct CLL {
//    int data;
//    struct CLL *next;
//} CLL;
//
//int sizeDLL(DLL *head) {
//    int c = 0;
//    while (head) {
//        c++;
//        head = head->next;
//    }
//    return c;
//}
//
//int sizeCLL(CLL *head) {
//    if (!head) return 0;
//    int c = 0;
//    CLL *temp = head;
//    do {
//        c++;
//        temp = temp->next;
//    } while (temp != head);
//    return c;
//}
//
//int main() {
//    // Example usage
//    DLL *d1 = malloc(sizeof(DLL));  
//    DLL *d2 = malloc(sizeof(DLL));  
//    d1->next = d2; d1->prev = NULL;
//    d2->next = NULL; d2->prev = d1;
//
//    CLL *c1 = malloc(sizeof(CLL));
//    CLL *c2 = malloc(sizeof(CLL));
//    c1->next = c2;
//    c2->next = c1;
//
//    printf("Size of DLL = %d\n", sizeDLL(d1));
//    printf("Size of CLL = %d\n", sizeCLL(c1));
//}
//
//


// Question 4



//typedef struct Node {
//    char data;
//    struct Node *prev, *next;
//} Node;
//
//Node *head = NULL;
//
//void insertEnd(char c) {
//    Node *n = malloc(sizeof(Node));
//    n->data = c;
//    n->next = n->prev = NULL;
//
//    if (!head) {
//        head = n;
//        return;
//    }
//
//    Node *temp = head;
//    while (temp->next) temp = temp->next;
//
//    temp->next = n;
//    n->prev = temp;
//}
//
//int isPalindrome() {
//    if (!head) return 1;
//
//    Node *left = head;
//    Node *right = head;
//
//    while (right->next != NULL)
//        right = right->next;
//
//    while (left != right && right->next != left) {
//        if (left->data != right->data)
//            return 0;
//
//        left = left->next;
//        right = right->prev;
//    }
//
//    return 1;
//}
//
//int main() {
//    char s[] = "madam";
//    for (int i = 0; s[i]; i++)
//        insertEnd(s[i]);
//
//    if (isPalindrome())
//        printf("True\n");
//    else
//        printf("False\n");
//}
//


// Question 5

//typedef struct Node {
//    int data;
//    struct Node *next;
//} Node;
//
//int isCircular(Node *head) {
//    if (head == NULL) return 1;
//
//    Node *temp = head->next;
//    while (temp != NULL && temp != head)
//        temp = temp->next;
//
//    return (temp == head);
//}
//
//int main() {
//    Node *a = malloc(sizeof(Node));
//    Node *b = malloc(sizeof(Node));
//    Node *c = malloc(sizeof(Node));
//
//    a->next = b;
//    b->next = c;
//    c->next = a;   // circular
//
//    if (isCircular(a))
//        printf("Circular Linked List\n");
//    else
//        printf("Not Circular\n");
//}
//
