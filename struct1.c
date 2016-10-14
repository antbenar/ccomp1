#include <stdio.h>

struct node{
    int value;
    struct node *next;
};

struct node *crear(int n){

    int i;
    struct node *prev,*cur,*head;
    head=malloc(sizeof(struct node));
    head->value=1;
    prev=head;
    for(i=2;i<=n;i++){
        cur=malloc(sizeof(struct node));
        cur->value=i;
        prev->next=cur;
        prev=cur;
    }
    prev->next=NULL;
    return head;
}

 void imprimir(struct node *head){
    struct node *prev;
    prev=head;
    while(prev->next!=NULL){
        printf("%d ",prev->value);
        prev=prev->next;
    }
    printf("%d",prev->value);
 }

void borrar(struct node *head, int n){
    struct node *prev,*act,*temp;
    prev=head;
    act=head->next;
    if (head->value == n){
        head=head->next;
        free(prev);
    }
    else{
        while(act->value!=NULL){
            if(act->value==n){
                prev->next=act->next;
                free(act);
                break;
            }
            prev=act;
            act=act->next;
        }
    }
}

void insertar(struct node *prev, int n, int val){
    struct node *nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->value=val;
    if (n==1){
        nuevo->next=prev;
        prev=nuevo;
        return;
    }
    while(prev->next!=NULL&&n>2){
        prev=prev->next;
        n--;
    }
    nuevo->next=prev->next;
    prev->next=nuevo;
}

void concadenar(struct node *prev,struct node *second){
    while(prev->next!=NULL){
        prev=prev->next;
    }
    prev->next=second;
}

int main()
{
    struct node *first,*second;

    first=crear(7);
    imprimir(first);
    printf("\n");

    borrar(first,4);
    imprimir(first);
    printf("\n");

    insertar(first,1,2);
    imprimir(first);
    printf("\n");

    second=crear(4);
    imprimir(second);
    printf("\n");

    concadenar(first,second);
    imprimir(first);

}
