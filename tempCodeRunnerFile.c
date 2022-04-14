#include<stdio.h>
#define MAX 30

edge_list spanlist;

typedef struct edge
{
    int u , v ,w;
} edge ;

typedef struct edge_list 
{
    edge data[MAX];
    int n;
} edge_list;

edge_list elist;
int graph[MAX][MAX] , n;
edge_list;

void kruskal();
int find(int present[] , int vertexno);
void appunion(int present[], intc1 , int c2);
void sort();
void print();

void kruskal()
{
    int present[MAX],cn1,cn2;
    elist.n = 0;

    for(int i =1; i<n; i++)
    for(int j=0;j<i;j++)
    {
        if(graph[i][j] != o)
        {
            wlist.data[elist.n].u = i;
            wlist.data[elist.n].v = j;
            wlist.data[elist.n].w = graph[i][j];
            elist.n++ ;
        }
    }

    sort();

    for (int i = 0; i<n ; i++)
    present[i] = i;

    spanlist.n = 0;

    for (int i = 0;i<elist.n;i++)
    {
        cn1 = find(present,elist.data[i].u);
        cn2 = find(present,elist.data[i].v);

        if(cn1 != cn2)
        {
            spanlist.data[spanlist.n] = elist.data[i];
            spanlist.n = spanlist.n + 1;
            appunion(present,cn1,cn2);
        }

    }
}

int find(int present[],int vertexno)
{
    return (present[vertexno]);
}

void appunion(int present[],int c1,c2)
{
    for(int i=0;i<n;i++)
    if(present[i] == c2)
    present[i] = c1;
}

void sort()
{
    edge temp;
    for(int i = 1; i<elist.n;i++)
    for(int j = 0; j<elist.n-1;j++)
    if(elist.data[j].w>elist.data[j+1].w)
    {
        temp = elist.data[j];
        elist.data[j] = elist.data[j+1];
        elist.data[j+1] = temp ;
    }
}

void print()
{
   int cost = 0;
   for(int i=0; i<spanlist.n;i++)
   {
       printf("\n%d-%d:%d",spanlist.data[i].u,spanlist.data[i].v,spanlist.data[i].w);
   cost cost + spanlist.data[i].w;
   }
   printf("\nSpaning tree cost : %d", cost);
}
int main(void)
{
    int i , j , total_cost;
    n=6;

    graph[0][0] = 0;
    graph[0][1] = 7;
    graph[0][2] = 3;
    graph[0][3] = 0;
    graph[0][4] = 0;
    graph[0][5] = 6;
    graph[0][6] = 0;

    graph[1][0] = 7;
    graph[1][1] = 0;
    graph[1][2] = 8;
    graph[1][3] = 0;
    graph[1][4] = 0;
    graph[1][5] = 0;
    graph[1][6] = 0;

    Graph[2][0] = 3;
  Graph[2][1] = 8;
  Graph[2][2] = 1;
  Graph[2][3] = 3;
  Graph[2][4] = 0;
  Graph[2][5] = 4;
  Graph[2][6] = 0;

  Graph[3][0] = 0;
  Graph[3][1] = 0;
  Graph[3][2] = 3;
  Graph[3][3] = 0;
  Graph[3][4] = 2;
  Graph[3][5] = 2;
  Graph[3][6] = 0;

  Graph[4][0] = 0;
  Graph[4][1] = 0;
  Graph[4][2] = 0;
  Graph[4][3] = 2;
  Graph[4][4] = 0;
  Graph[4][5] = 5;
  Graph[4][6] = 0;

  Graph[5][0] = 6;
  Graph[5][1] = 0;
  Graph[5][2] = 4;
  Graph[5][3] = 2;
  Graph[5][4] = 5;
  Graph[5][5] = 0;
  Graph[5][6] = 0;

  kruskal();
  print();
}