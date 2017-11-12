#include<stdio.h>
#include<conio.h>

struct graph
{
 int nodes;
 int edges;
 int **mat;
};

void create_graph()
{
  int i,j,k,x,y,p,q;
  struct graph *g=(struct graph*)malloc(sizeof(struct graph));
  printf("Enter the number of nodes and edges: ");
  scanf("%d %d",&g->nodes,&g->edges);
  g->mat=(int**)malloc(sizeof(int)*(g->nodes * g->nodes));
  for(i=0;i<g->nodes;i++)
  {
   for(j=0;j<g->nodes;j++)
   {
     g->mat[i][j]=0;
   }
  }
  printf("Enter Connections: ");
  for(i=0;i<g->edges;i++)
  {
   scanf("%d %d", &x, &y);
   g->mat[x][y]=1;
   //g->mat[y][x]=1;
  }
  for(i=0;i<g->nodes;i++)
  {
   for(j=0;j<g->nodes;j++)
   {
     printf("| %d |\t", g->mat[i][j]);
   }
   printf("\n");
  }
}

void main()
{
 clrscr();
 create_graph();
 getch();
}