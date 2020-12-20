#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
Node *create_Node(int n) { //LL creation
    Node *head = NULL,*p,*q;
    while(n>0) {
        p=(Node*)malloc(sizeof(Node*));
        scanf("%d",&p->data);
        p->next = NULL;
        if(head == NULL)
            head = p;
        else
            q->next = p;
        q=p;
        n--;
    }
    return head;
}//LL created
Node *Insert_node(Node *head, int ch) {
    Node *p,*q;
    p = (Node*)malloc(sizeof(Node*));
    printf("Enter the new nodes data: ");
    scanf("%d",&p->data);
    p->next = NULL;
    if(ch == 1) {// Insertion at beginning
        p->next = head;
        head = p;
    }//If end
    else if(ch == 2) {//Insertion at between
        int pos;
        printf("Enter the position: ");
        scanf("%d",&pos);
        if(pos == 1) {//Insertion at between if pos entered is 1 ie start
            p->next = head;
            head = p;
        }//If end
        else {
            q=head;
            while(pos > 2) {
                q=q->next;
                pos --;
            }
            p->next = q->next;
            q->next = p;
        }//else end
    }// Else If end

    else if(ch == 3) {//Insertion at end
        for(q=head;q->next!=NULL;q=q->next);// Understand the condition of for loop
            q->next = p;
    }//else end

    return head;
}
Node *Delete_node(Node *head, int ch) {
    Node *p,*q;
    if(ch == 4) {// Deletion at beginning
        p = head;
        head = head->next;
        free(p);
    }//end if
    else if(ch == 5) {// Deletion in between
        int pos;
        q=head;
        printf("Enter the pos: ");
        scanf("%d",&pos);
        if(pos == 1){// Deletion in between but pos =1

            p = head;
            head = head->next;
            free(p);
        }//end if

        else {// Deletion in between but pos is other than 1
            while(pos>1) {
                p = q;
                q = q->next;
                pos--;
            }
            p->next = q->next;
            free(q);
        }//else end

    }//else if end
    else {// Else
        for(q=head;q->next!=NULL;q=q->next) // Understand the condition of for loop
            p=q;
        p->next= NULL;
        free(q);
    }//else end
    return head;
}
Node *choice(Node *head) {//choice function started
    int ch;
    printf("Enter your choice: \n 1.Insertion at beginning 2. Insertion in between 3. Insertion at the end \n");
    printf("Enter your choice: \n 4.Deletion at beginning 5.Deletion in between 6.Deletion at the end \n");
    scanf("%d",&ch);
    switch(ch) {
        case 1: {
            head = Insert_node(head,ch);
            break;
        }
        case 2:{
            head = Insert_node(head,ch);
            break;
        }
        case 3:{
            head = Insert_node(head,ch);
            break;
        }
        case 4: {
            head = Delete_node(head,ch);
            break;
        }
        case 5: {
            head = Delete_node(head,ch);
            break;
        }
        case 6:{
            head = Delete_node(head,ch);
            break;
        }
        default :
            printf("Invalid Choice!!!");
    }
}// Choice function  ended
void displayLL(Node *head) {
    for(Node *p=head;p!=NULL;p=p->next)
        printf("%d ",p->data);
    printf("\n");
}
int main() {
    int n;
    scanf("%d",&n);
    Node *start=NULL;
    start = create_Node(n);
    displayLL(start);
    start = choice(start);
    displayLL(start);

    return 0;
}
