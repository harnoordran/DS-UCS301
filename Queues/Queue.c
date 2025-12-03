#include <stdio.h>
#include <stdbool.h>
#define MAXLEN 5

typedef struct{
	int element[MAXLEN];
	int front, rear;
} Queue;

Queue init(){
	Queue q;
	q.front = -1, q.rear = -1;
	
	return q;
	
}

bool isEmpty(Queue q){
	if(q.front == -1 && q.rear == -1){
		return true;
	}
	
	return false;
}


bool isFull(Queue q){
	if(((q.rear +1) % MAXLEN) == q.front){
		return true;
	}
	return false;
}

int front(Queue q){
	if(isEmpty(q)){
		return -1;
	}
	return q.element[q.front];
}

Queue enqueue(Queue q, int element){
	
	if(isFull(q)){
		printf("Overflow");
	}
	else if(isEmpty(q)){
		q.front = q.rear = 0;
		q.element[q.rear] = element;
		
		
		
	}
	else{
		
		q.rear = (q.rear + 1) % MAXLEN;
		q.element[q.rear] = element;
	}
	
	return q;
}

Queue dequeue(Queue q){
	if(isEmpty(q)){
		printf("Underflow");
			
	}
	else{
		int element = q.element[q.front];
		printf("The element popped is %d\n",element);
		if(q.front == q.rear){
			q.front = q.rear = -1;
		}
		else{
			q.front = (q.front+1) % MAXLEN;
			
			
		}
		
		
	}
	
	
	return q;
}

void print(Queue q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = q.front; i != q.rear; i = (i+1) % MAXLEN) {
        printf("%d ", q.element[i]);
    }
    printf("%d\n", q.element[q.rear]); // rear included
}


int size(Queue q){
	int count;
	int i = q.front;
	
	while(true){
		count++;
		if(i==q.rear){
			break;
			
		}
		i = (i+1)%MAXLEN;
	}
	
	
	
	return count;
}
int main(){
	
	Queue q;
	q = init();
	
	q = enqueue(q,5);
	q = enqueue(q,6);
	q = enqueue(q,7);
	q = enqueue(q,8);
	q = enqueue(q,9);
	print(q);
//	q = enqueue(q,10);
	

	q = dequeue(q);
	
	q = enqueue(q,11);
	
	print(q);
	
	
	printf("Size is %d\n",size(q));
	return 0;
}