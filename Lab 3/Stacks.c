// Harnoor Kaur Dran: 1024170436 (2Q41)
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Question 1

#define MAXLEN 100
//
//typedef struct{
//    int elements[MAXLEN];
//    int top;
//} Stack;
//
//Stack init(){
//    Stack s;
//    s.top = -1;
//    return s;
//}
//
//
//bool isEmpty(Stack s){
//    if(s.top < 0 ){
//        return true;
//    }
//    
//    return false;
//}
//
//bool isFull(Stack s){
//    if(s.top == MAXLEN -1 ){
//        return true;
//        
//    }
//    
//    return false;
//}
//Stack push(Stack s, int data){
//    
//    if(!isFull(s)){
//        
//        s.top = s.top + 1;
//        s.elements[s.top] = data;
//        
//        
//        
//    }
//    else{
//        printf("OVERFLOW\n");
//    }
//    return s;
//}
//
//Stack pop(Stack s){
//    
//    if(isEmpty(s)){
//        printf("UNDERFLOW\n");
//    }
//    
//    s.top = s.top -1;
//    return s;
//}
//
//void display(Stack s){
//    for(int i=s.top;i>=0;i--){
//        printf("%d\n", s.elements[i]);
//        
//    }
//}
//
//int peek(Stack s){
//    if(isEmpty(s)){
//        printf("UNDERFLOW");
//        return -1;
//        
//    }
//    
//    return s.elements[s.top];
//    
//    
//}
//
//int main(){
//	
//	Stack s;
//	s = init();
//	s = push(s,5);
//	s = push(s,6);
//	s = push(s,7);
//	s = push(s,8);
//	display(s);
//	
//	s = pop(s);
//
//	display(s);
//	
//
//	
//	return 0;
//}


// Question 2


//typedef struct{
//    int elements[MAXLEN];
//    int top;
//} Stack;
//
//Stack init(){
//	Stack s;
//	s.top = -1;
//	return s;
//}
//
//int main(){
//	char str[MAXLEN];
//	Stack s = init();
//	
//	printf("Enter a string: ");
//	scanf("%s", str);
//	
//	for(int i=0;str[i] != '\0';i++){
//		s.top++;
//		s.elements[s.top] = str[i];
//	}
//	
//	printf("Reversed String: \n");
//	
//	while(s.top != -1){
//		printf("%c",s.elements[s.top--]);
//	}
//	
//	
//	return true;
//	
//}


// Question 3


//#include <stdio.h>
//#include <string.h>
//
//#define MAX 100
//
//char stack[MAX];
//int top = -1;
//
//void push(char c) {
//    stack[++top] = c;
//}
//
//char pop() {
//    if (top == -1) return '\0';
//    return stack[top--];
//}
//
//int isMatchingPair(char open, char close) {
//    return (open == '(' && close == ')') ||
//           (open == '{' && close == '}') ||
//           (open == '[' && close == ']');
//}
//
//int isBalanced(char exp[]) {
//    for (int i = 0; exp[i] != '\0'; i++) {
//        char ch = exp[i];
//
//        if (ch == '(' || ch == '{' || ch == '[') {
//            push(ch);
//        } 
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            char popped = pop();
//
//            if (!isMatchingPair(popped, ch))
//                return 0;  // not balanced
//        }
//    }
//
//    return (top == -1); // if stack empty ? balanced
//}
//
//int main() {
//    char exp[MAX];
//
//    printf("Enter expression: ");
//    scanf("%s", exp);
//
//    if (isBalanced(exp))
//        printf("Balanced\n");
//    else
//        printf("Not Balanced\n");
//
//    return 0;
//}


// Question 4

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

//#define MAX 100
//
//typedef struct {
//	char elements[MAX];
//	int top;
//} Stack;
//
//
//Stack init(){
//	Stack s;
//	s.top = -1;
//	return s;
//}
//
//
//bool isEmpty(Stack* s){
//	return s->top == -1;
//}
//
//void push(Stack* s, char val){
//	s->top++;
//	s->elements[s->top] = val;
//}
//
//char pop(Stack* s){
//	if(isEmpty(s)){
//		return '\0';
//	}
//	
//	return s->elements[s->top--];
//	
//}
//
//
//char peek(Stack* s){
//	if(isEmpty(s)){
//		return '\0';
//	}
//	return s->elements[s->top];
//}
//
//int precedence(char ch){
//	switch(ch){
//		case '^':
//			return 3;
//			
//		case '*':
//		case '/': return 2;
//		case '+':
//        case '-': return 1;
//	}
//	
//	return 0;
//}
//
//bool isOperator(char ch) {
//    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
//}
//
//
//void infixToPostfix(char infix[], char postfix[]){
//	Stack s;
//	s =init();
//	
//	int k =0;
//	
//	for(int i=0; infix[i] != '\0';i++){
//		char ch = infix[i];
//		
//		if(isalnum(ch)){
//			postfix[k++] = ch;
//		}
//		
//		else if(ch == ')'){
//			
//			while(!isEmpty(&s) && peek(&s) != '('){
//				postfix[k++] = pop(&s);
//				
//			}
//			
//			pop(&s);
//			
//			
//		}
//		
//		else if(ch == '('){
//			push(&s,ch);
//		}
//		
//		else if(isOperator(ch)){
//			while(!isEmpty(&s) && precedence(peek(&s)) >= precedence(ch)){
//				postfix[k++] = pop(&s);
//			}
//			
//			push(&s,ch);
//		}
//		
//		
//	}
//	
//	while (!isEmpty(&s)){
//		postfix[k++] = pop(&s);
//	}
//	postfix[k] = '\0';
//}
//
//int main() {
//    char infix[MAX], postfix[MAX];
//
//    printf("Enter infix expression: ");
//    scanf("%s", infix);
//
//    infixToPostfix(infix, postfix);
//
//    printf("Postfix Expression: %s\n", postfix);
//
//    return 0;
//}

// Question 5
#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int val) {
    s->items[++(s->top)] = val;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Error: Stack underflow\n");
        return 0;
    }
    return s->items[(s->top)--];
}

int evaluatePostfix(char exp[]) {
    Stack s;
    init(&s);

    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        
        if (isdigit(ch)) {
            push(&s, ch - '0');  
        }

        else {
            
            int val2 = pop(&s);
            int val1 = pop(&s);

            switch (ch) {
                case '+': push(&s, val1 + val2); break;
                case '-': push(&s, val1 - val2); break;
                case '*': push(&s, val1 * val2); break;
                case '/': push(&s, val1 / val2); break;
                case '^': push(&s, pow(val1, val2)); break;
                default:
                    printf("Invalid operator %c\n", ch);
                    return 0;
            }
        }
    }

    
    return pop(&s);
}

int main() {
    char postfix[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);

    printf("Result: %d\n", result);

    return 0;
}
