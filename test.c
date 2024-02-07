#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int cons, pow;
    struct node *next;
};

struct  node *s1 = NULL, *s2 = NULL;

void create(struct node *st, int deg) {
      while(deg) {
            if(st == NULL) {
                  st = (struct node *) malloc(sizeof(struct node));
            }
            else {
                  struct node *temp = st;
                  while()
            }
      }
}

void addition(struct node *st1, struct node *st2) {

}

void main() {
      int deg;

      printf("Enter the deg of polynomial 1: ");
      scanf("%d", &deg);
      create(&s1, deg);

      printf("Enter the deg of polynomial 2: ");
      scanf("%d", &deg);
      create(&s2);

      addition(s1, s2);
}




//
//struct node{
//    int data;
//    struct node *prev, *next;
//};
//
//struct node *head=NULL;
//
//void create(){
//      char flag[2];
//      struct node *newnode, *temp;
//
//      do
//      {
//            newnode=(struct node*)malloc(sizeof(struct node));
//            printf("enter data");
//            scanf("%d",&newnode->data);
//            newnode->prev=NULL;
//            newnode->next=NULL;
//            if(head==NULL){
//                  head=temp=newnode;
//            }else{
//                  temp->next=newnode;
//                  newnode->prev=temp;
//                  temp=newnode;
//            }
//            printf("Do you want to continue----------- ? y/n  ");
//            scanf("%s", &flag);
//      } while(strcmp(flag, "y\0") == 0);
//}
//void display(){
//      struct node *temp;
//      temp=head;
//      while(temp!=0){
//            printf("%d\t",temp->data);
//            temp=temp->next;
//      }
//}
//void main(){
//      create();
//      display();
//}
//
//
//struct treenode {
//    int val;
//    struct treenode *l, *r;
//};
//
//struct node * root;
//
//void createnode(struct treenode *ptr, int dat) {
//      ptr = (struct treenode *) malloc(sizeof (struct treenode ));
//      ptr->val = dat;
//      ptr->l = NULL; ptr->r = NULL;
//}
//
//void findpos(struct treenode *ptr, int da) {
//      if(ptr == NULL) {
//            createnode(ptr, da);
//      }
//      else if(ptr->l == NULL) {
//            findpos(ptr->l, da);
//            printf("enter data");
//            scanf("%d",&da);
//            findpos(ptr->r, da);
//      }
//      else {
//            findpos(ptr->l, da);
//            printf("enter data");
//            scanf("%d",&da);
//            findpos(ptr->r, da);
//      }
//}
//
//void display(struct treenode * ptr) {
//      if (ptr != NULL) {
//            display(ptr->l);
//            printf("%d ", ptr->val);
//            display(ptr->r);
//      }
//}
//
//void main() {
//      char flag[2];
//      int data;
//
//      do
//      {
//            printf("enter data");
//            scanf("%d",&data);
//
//            findpos(root, data);
//
//            printf("Do you want to continue----------- ? y/n  ");
//            scanf("%s", &flag);
//      } while(strcmp(flag, "y\0") == 0);
//
//      display(root);
//}