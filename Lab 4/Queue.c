#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100


// Question 1

//typedef struct {
//    int arr[MAX];
//    int front, rear;
//} Queue;
//
//Queue init() {
//    Queue q;
//    q.front = q.rear = -1;
//    return q;
//}
//
//bool isEmpty(Queue q) {
//    return q.front == -1;
//}
//
//bool isFull(Queue q) {
//    return q.rear == MAX - 1;
//}
//
//int peek(Queue q) {
//    return isEmpty(q) ? -1 : q.arr[q.front];
//}
//
//Queue enqueue(Queue q, int x) {
//    if (isFull(q)) {
//        printf("Queue Overflow\n");
//        return q;
//    }
//    if (isEmpty(q)) q.front = 0;
//    q.arr[++q.rear] = x;
//    return q;
//}
//
//Queue dequeue(Queue q) {
//    if (isEmpty(q)) {
//        printf("Queue Underflow\n");
//        return q;
//    }
//    printf("Deleted: %d\n", q.arr[q.front]);
//    if (q.front == q.rear)
//        q.front = q.rear = -1;
//    else
//        q.front++;
//    return q;
//}
//
//void display(Queue q) {
//    if (isEmpty(q)) {
//        printf("Queue empty\n");
//        return;
//    }
//    for (int i = q.front; i <= q.rear; i++)
//        printf("%d ", q.arr[i]);
//    printf("\n");
//}
//
//int main() {
//    Queue q = init();
//    int choice, val;
//
//    while (1) {
//        printf("\n---- SIMPLE QUEUE MENU ----\n");
//        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
//        printf("Enter choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("Enter value: ");
//            scanf("%d", &val);
//            q = enqueue(q, val);
//            break;
//
//        case 2:
//            q = dequeue(q);
//            break;
//
//        case 3:
//            printf("Front element = %d\n", peek(q));
//            break;
//
//        case 4:
//            display(q);
//            break;
//
//        case 5:
//            return 0;
//        }
//    }
//}


// Question 2


//typedef struct {
//    int arr[MAX];
//    int front, rear;
//} CQueue;
//
//CQueue init() {
//    CQueue q;
//    q.front = q.rear = -1;
//    return q;
//}
//
//bool isEmpty(CQueue q) {
//    return q.front == -1;
//}
//
//bool isFull(CQueue q) {
//    return (q.rear + 1) % MAX == q.front;
//}
//
//int peek(CQueue q) {
//    return isEmpty(q) ? -1 : q.arr[q.front];
//}
//
//CQueue enqueue(CQueue q, int x) {
//    if (isFull(q)) {
//        printf("Queue Overflow\n");
//        return q;
//    }
//    if (isEmpty(q)) q.front = q.rear = 0;
//    else q.rear = (q.rear + 1) % MAX;
//
//    q.arr[q.rear] = x;
//    return q;
//}
//
//CQueue dequeue(CQueue q) {
//    if (isEmpty(q)) {
//        printf("Queue Underflow\n");
//        return q;
//    }
//    printf("Deleted: %d\n", q.arr[q.front]);
//
//    if (q.front == q.rear)
//        q.front = q.rear = -1;
//    else
//        q.front = (q.front + 1) % MAX;
//
//    return q;
//}
//
//void display(CQueue q) {
//    if (isEmpty(q)) {
//        printf("Queue Empty\n");
//        return;
//    }
//    int i = q.front;
//    while (1) {
//        printf("%d ", q.arr[i]);
//        if (i == q.rear) break;
//        i = (i + 1) % MAX;
//    }
//    printf("\n");
//}
//
//int main() {
//    CQueue q = init();
//    int choice, val;
//
//    while (1) {
//        printf("\n--- CIRCULAR QUEUE MENU ---\n");
//        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
//        printf("Enter choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("Enter value: ");
//            scanf("%d", &val);
//            q = enqueue(q, val);
//            break;
//
//        case 2:
//            q = dequeue(q);
//            break;
//
//        case 3:
//            printf("Front = %d\n", peek(q));
//            break;
//
//        case 4:
//            display(q);
//            break;
//
//        case 5:
//            return 0;
//        }
//    }
//}


// Question 3




//typedef struct {
//    int arr[MAX];
//    int front, rear;
//} Queue;
//
//Queue init() {
//    Queue q;
//    q.front = q.rear = -1;
//    return q;
//}
//
//int isEmpty(Queue q) {
//    return q.front == -1;
//}
//
//Queue enqueue(Queue q, int x) {
//    if (q.rear == MAX - 1) return q;
//    if (isEmpty(q)) q.front = 0;
//    q.arr[++q.rear] = x;
//    return q;
//}
//
//int dequeue(Queue *q) {
//    int val = q->arr[q->front];
//    if (q->front == q->rear) q->front = q->rear = -1;
//    else q->front++;
//    return val;
//}
//
//int main() {
//    Queue q = init(), first = init(), second = init();
//    int n, x;
//
//    printf("Enter number of elements (even): ");
//    scanf("%d", &n);
//
//    printf("Enter elements:\n");
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &x);
//        q = enqueue(q, x);
//    }
//
//    int half = n / 2;
//
//    for (int i = 0; i < half; i++)
//        first = enqueue(first, dequeue(&q));
//
//    for (int i = 0; i < half; i++)
//        second = enqueue(second, dequeue(&q));
//
//    printf("Interleaved Output: ");
//    while (!isEmpty(first) && !isEmpty(second)) {
//        printf("%d ", dequeue(&first));
//        printf("%d ", dequeue(&second));
//    }
//}
//

// Question 4


//typedef struct {
//    char arr[MAX];
//    int front, rear;
//} Queue;
//
//Queue enqueue(Queue q, char x) {
//    if (q.rear == MAX - 1) return q;
//    if (q.front == -1) q.front = 0;
//    q.arr[++q.rear] = x;
//    return q;
//}
//
//char dequeue(Queue *q) {
//    char c = q->arr[q->front];
//    if (q->front == q->rear) q->front = q->rear = -1;
//    else q->front++;
//    return c;
//}
//
//int main() {
//    char str[100];
//    int freq[26] = {0};
//    Queue q = { .front = -1, .rear = -1 };
//
//    printf("Enter characters (space separated): ");
//    while (scanf(" %c", &str[0]) == 1) {
//        char ch = str[0];
//        freq[ch - 'a']++;
//
//        if (freq[ch - 'a'] == 1)
//            q = enqueue(q, ch);
//
//        while (q.front != -1 && freq[q.arr[q.front] - 'a'] > 1)
//            dequeue(&q);
//
//        if (q.front == -1)
//            printf("-1 ");
//        else
//            printf("%c ", q.arr[q.front]);
//    }
//}
//


//Question 5  - a



//typedef struct {
//    int arr[MAX];
//    int front, rear;
//} Queue;
//
//Queue init() {
//    Queue q;
//    q.front = q.rear = -1;
//    return q;
//}
//
//int isEmpty(Queue q) {
//    return q.front == -1;
//}
//
//Queue enqueue(Queue q, int x) {
//    if (q.rear == MAX - 1) return q;
//    if (isEmpty(q)) q.front = 0;
//    q.arr[++q.rear] = x;
//    return q;
//}
//
//int dequeue(Queue *q) {
//    int x = q->arr[q->front];
//    if (q->front == q->rear) q->front = q->rear = -1;
//    else q->front++;
//    return x;
//}
//
//// Stack using 2 queues
//int main() {
//    Queue q1 = init(), q2 = init();
//    int choice, val;
//
//    while (1) {
//        printf("\n1 Push\n2 Pop\n3 Exit\nEnter: ");
//        scanf("%d", &choice);
//
//        if (choice == 1) {
//            printf("Enter value: ");
//            scanf("%d", &val);
//
//            q1 = enqueue(q1, val);
//
//        } else if (choice == 2) {
//            if (isEmpty(q1)) {
//                printf("Stack empty\n");
//                continue;
//            }
//
//            while (q1.front != q1.rear)
//                q2 = enqueue(q2, dequeue(&q1));
//
//            printf("Popped: %d\n", dequeue(&q1));
//
//            Queue temp = q1;
//            q1 = q2;
//            q2 = temp;
//
//        } else return 0;
//    }
//}
//


// Question 5 - b


//typedef struct {
//    int arr[MAX];
//    int front, rear;
//} Queue;
//
//Queue init() {
//    Queue q;
//    q.front = q.rear = -1;
//    return q;
//}
//
//int isEmpty(Queue q) {
//    return q.front == -1;
//}
//
//Queue enqueue(Queue q, int x) {
//    if (q.rear == MAX - 1) return q;
//    if (isEmpty(q)) q.front = 0;
//    q.arr[++q.rear] = x;
//    return q;
//}
//
//int dequeue(Queue *q) {
//    int x = q->arr[q->front];
//    if (q->front == q->rear) q->front = q->rear = -1;
//    else q->front++;
//    return x;
//}
//
//int main() {
//    Queue q = init(), temp = init();
//    int choice, val;
//
//    while (1) {
//        printf("\n1 Push\n2 Pop\n3 Exit\nEnter: ");
//        scanf("%d", &choice);
//
//        if (choice == 1) {
//            printf("Enter value: ");
//            scanf("%d", &val);
//
//            temp = enqueue(temp, val);
//
//            while (!isEmpty(q))
//                temp = enqueue(temp, dequeue(&q));
//
//            q = temp;
//            temp = init();
//
//        } else if (choice == 2) {
//            if (isEmpty(q)) printf("Stack empty\n");
//            else printf("Popped: %d\n", dequeue(&q));
//
//        } else return 0;
//    }
//}
