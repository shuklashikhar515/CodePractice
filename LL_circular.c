#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node Node;
int main() {
    int ch;
    Node *start = NULL,*q,*p;
    do{
        printf("1. Insert node.\n");
        printf("2. Traversing node.\n");
        printf("3. Exit\n");
        scanf("%d",&ch);
        switch(ch) {
            case 1: {// Insert Node
                p = (Node*)malloc(sizeof(Node*));
                scanf("%d",&p->data);
                //p->next = NULL;
                if(start == NULL)
                    start = p;
                else
                    q->next = p;
                p->next = start;
                q=p;
                break;
            }
            case 2: {// traversing LL
                if(start == NULL)
                    printf("LL empty.\n");

                else {
                    p = start;
                    do{
                        printf("%d ",p->data);
                        p=p->next;
                    }while(p!=start);
                    printf("\n");
                }
                break;
            }
            case 3:
                break;
            default :
                printf("Invalid choice!!\n");
        }
    }while(ch!=3);
    return 0;
}
