#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node Node;
Node *create_node(int n) { // LL Creation
    Node *head = NULL,*p,*q;
    printf("Enter the %d values : ",n);
    while(n>0) {
        p = (Node*)malloc(sizeof(Node*));
        scanf("%d",&p->data);
        p->next = NULL;
        if(head  == NULL)
            head = p;
        else
            q->next = p;
        q=p;
        n--;
    }
    return head;
}//LL created
// Deletion of nodes
Node *Deletion_Node(Node *head, int ch) {
    if(ch == 1) {
        Node *p = head;
        head = head->next;
        free(p);
    }
    else if(ch == 2) {
        int pos;
        Node *p,*q=head;
        printf("Enter the position: ");
        scanf("%d",&pos);
        if(pos==1){
            Node *p = head;
            head = head->next;
            free(p);

        }
        else {
            while(pos>1) {
                p=q;
                q=q->next;
                pos--;
            }
            p->next = q->next;
            free(q);
        }
    }
    else {
        Node*p,*q;
        for(q=head;q->next!=NULL; q=q->next) {
            p = q;
        }
        p->next = NULL;
        free(q);
    }
    return head;
}

Node *Choice(Node *head) {
    int ch;
    printf("Enter your choice: \n 1. Deletion at beginning\n 2. Deletion in between\n 3. Deletion at the end. \n");
    scanf("%d",&ch);
    switch(ch) {
        case 1: {
            head = Deletion_Node(head, ch);
            break;
        }
        case 2: {
            head = Deletion_Node(head, ch);
            break;
        }
        case 3:{
            head = Deletion_Node(head, ch);
            break;
        }
        default :
            printf("Invalid choice!!!");
    }

    return head;
}

void Display(Node *head) {
    for(Node *p= head; p!=NULL;p=p->next)
        printf("%d ",p->data);
}
int main() {
    int n;
    Node *start;
    printf("Enter the length of Linked List: ");
    scanf("%d",&n);
    start = create_node(n);
    Display(start);
    start = Choice(start);
    Display(start);
    return 0;
}
