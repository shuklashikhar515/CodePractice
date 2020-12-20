#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node Node;
//Creation of Linked List
Node* create_Node(int n) {
    Node *start = NULL,*p,*q;
    for(;n>0;n--) {
        p=(Node*)malloc(sizeof(Node*));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start == NULL)
            start = p;
        else
            q->next = p;
        q=p;
    }
    return start;
}// LL created
Node *insertion(Node *start_t, int ch) {
    Node *x;
    Node *p = (Node*)malloc(sizeof(Node*));// creation of node for insertion
    scanf("%d",&p->data);
    p->next = NULL;

    if(ch == 1) {// insertion at the beginning when ch ==1;
        p->next = start_t;
        start_t = p;
    }

    else if(ch == 2){// insertion at the end when ch == 2
        for(x = start_t;x->next!=NULL;x=x->next);
        x->next = p;
    }

    else {
        int pos;
        printf("Enter where u wanna add a node: ");
        scanf("%d",&pos);
        x = start_t;
        while(pos>1) {
            x=x->next;
            pos--;
        }
        p->next = x->next;
        x->next = p;
    }
    return start_t;
}
// Enter the choice where u wanna insert the new node;

Node *choice (Node *start_t) {
    int ch,t=0;
    do{
        printf("Press:-\n 1-Insertion at beginning\n 2-Insertion at End\n 3-Insertion in Between :\n");
        scanf("%d",&ch);
        switch(ch) {
        case 1: {
            start_t=insertion(start_t,1);
            break;
        }
        case 2: {
            start_t=insertion(start_t,2);
            break;
        }
        case 3: {
            start_t=insertion(start_t,3);
            break;
        }
        default :
            printf("Invalid Choice!!!!\n");

        printf("press -1 to exit else press any number: ");
        scanf("%d",&t);
        }
    }while(t != -1);
    return start_t;
}
// Display the linked List
void display_LL(Node *start_temp){
    for(Node *p = start_temp;p!=NULL;p=p->next) {
        printf("%d ",p->data);
    }
    printf("\n");
}// Display Func ends;
// Deletion of Nodes




int main(){
    int n;
    Node *start;
    printf("No of nodes: ");
    scanf("%d",&n);
    printf("Enter the elements of nodes: ");
    start = create_Node(n);
    start = choice(start);
    display_LL(start);
    return 0;
}
