#include <stdio.h>
#include <stdlib.h>
 #include "Queue.h"
  #include "Stack.h"



  struct Node {
        struct Node *lchild;
           int data;
            struct Node *rchild; };
            struct Node *root=NULL;

   struct Node *root=NULL;
    void Treecreate() {
        struct Node *p,*t;
           int x;
            struct Queue q;
                create(&q,100);
                   printf("Enter root value ");
                   scanf("%d",&x);
                      root=(struct Node *)malloc(sizeof(struct Node));

                       root->data=x;
                           root->lchild=root->rchild=NULL;
                               enqueue(&q,root);
                                   while(!isEmpty(q))
                           {        p=dequeue(&q);
                    printf("enter left child of %d ",p->data);
                         scanf("%d",&x);
                               if(x!=-1)
                                 {
  t=(struct Node *)malloc(sizeof(struct Node));
                      t->data=x;
                            t->lchild=t->rchild=NULL;
                                       p->lchild=t;
                                enqueue(&q,t);        }
                                        printf("enter right child of %d ",p->data);
                                                scanf("%d",&x);
                                                      if(x!=-1)
                                                             {
  t=(struct Node *)malloc(sizeof(struct Node));
             t->data=x;
               t->lchild=t->rchild=NULL;
                          p->rchild=t;
                    enqueue(&q,t);        }    }
}


 void LevelOrder(struct Node *root) {
      struct Queue q;
          create(&q,100);
  printf("%d ",root->data);
     enqueue(&q,root);
          while(!isEmpty(q))    {
                  root=dequeue(&q);
                          if(root->lchild)}
    {
printf("%d ",root->lchild->data);            enqueue(&q,root->lchild);          }

       if(root->rchild)        {
      printf("%d ",root->rchild->data);
                    enqueue(&q,root->rchild);
                   }            } }
void main() {
    Treecreate();
           LevelOrder(root);
     }
