#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
int main(){
    int x;
    Node *n;
    Node *start = NULL , *p,*q;
    // Start Node
    start = (Node*)malloc(sizeof(Node*));
    printf("Enter the value : ");
    scanf("%d",&start->data);
    start->next = NULL;
    q = start;
    // Node 2
    p = (Node*)malloc(sizeof(Node*));
    printf("Enter the value : ");
    scanf("%d",&p->data);
    p->next = NULL;
    q->next = p;
    q=p;
    //Node 3
    p = (Node*)malloc(sizeof(Node*));
    printf("Enter the value : ");
    scanf("%d",&p->data);
    p->next = NULL;
    q->next = p;
    q=p;
    
    for(n=start;n!=NULL;n=n->next) {
        printf("%d\t",n->data);
    }
    return 0;
}
    