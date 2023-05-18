// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

//define tag type for node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

//enum statement for arithmetic operation
typedef enum{
    ADD,SUB,MUL,DIV
}perfOperation;

//create linked list for nodes with only int data
Node* createNode(int data, Node* nextNode) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = nextNode;
    return newNode;

}

//void func prints data of a node in argument
void calc(Node* node) {
    if (node!= NULL){
        printf("output: %d\n", node->data);
    }else{
        printf("node is NULL\n");
    }
   
    printf("\n");
}
//switch operation to calculate node->data
int calculate(int input1, int input2,perfOperation operation){
    switch(operation){
    case ADD:
       return input1+input2;
       break;
    case SUB: 
       return input2-input1;
       break;
    case MUL:
       return input1*input2;
       break;
    case DIV:
       return input1/input2;
       break;
    default:
       printf("Error:\n");
       break;
}
}

//node function for nodes with nodes as argument
Node* processNode(Node* arg1, Node* arg2,perfOperation operation) {
    
    int cal =calculate(arg1->data,arg2->data, operation);
    
    createNode(cal,arg1);
    
    
    
}
int main() {
    Node *num1=createNode(10,NULL);
    Node *num2=createNode(6,num1);
    Node *num3=createNode(5,num2);
    Node *num4=createNode(4,num3);
    Node *null=createNode(-2,num4);
    
     Node *add=processNode(num1,num2,ADD);
     Node *mul=processNode(num3,num4,MUL);
     Node *sub=processNode(mul,add,SUB);
     Node *fibo=processNode(sub,null,SUB);
     
     calc(add);
     calc(mul);
     calc(sub);
     calc(fibo);
     
     
     

    
   


    return 0;
}