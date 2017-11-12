#include<stdio.h>
#include<conio.h>

struct node
{
 int data;
 struct node *next;
};

struct graph
{
 int v;
 int e;
 struct node *list;
};

struct graph *g; /*This pointer points to the graph structure*/

void create_graph()
{
  int src,dest,i;
  struct node *temp, *temp1, *t,*t1;
  g=(struct graph*)malloc(sizeof(struct graph));
  printf("\nEnter the no. of vertices and edges: ");
  scanf("%d %d", &g->v,&g->e);
  g->list=NULL;
  g->list=(struct node*)malloc(g->v * (sizeof(struct node)));

  for(i=0;i<g->v;i++)
  {
    t=g->list+i;
    t->data = i;
    t->next=NULL;
  }
  for(i=0;i<g->e;i++)
  {
   printf("\nConnections: ");
   scanf("%d %d", &src,&dest);
   temp=(struct node*)malloc(sizeof(struct node));
     temp->data=dest;
     temp->next=NULL;
     t1=g->list+src;
   if(t1->next==NULL)
     {
      t1->next=temp;
     }
   else
    {
      temp1=t1;
      while(temp1->next!=NULL)
	 temp1=temp1->next;
      temp1->next=temp;
    }
  }

  for(i=0;i<g->v;i++)
  {
    struct node *temp2;
    temp2=g->list+i;
    printf("\n| %d(%d) | %d |",temp2->data,temp2,temp2->next);
    while(temp2->next!=NULL)
    {
      temp2=temp2->next;
      printf("-->| %d(%d) | %d |",temp2->data,temp2,temp2->next);
    }
  }

}

void main()
{
 clrscr();
 create_graph();
 getch();
}

/*OUTPUT

Enter the no. of vertices and edges: 4 5

Connections: 0 1

Connections: 0 2

Connections: 1 2

Connections: 1 3

Connections: 2 3

| 0(1938) | 1958 |-->| 1(1958) | 1966 |-->| 2(1966) | 0 |
| 1(1942) | 1974 |-->| 2(1974) | 1982 |-->| 3(1982) | 0 |
| 2(1946) | 1990 |-->| 3(1990) | 0 |
| 3(1950) | 0 |
*/