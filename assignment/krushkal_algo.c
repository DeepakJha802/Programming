#include <stdio.h>

#define MAX 30

typedef struct edge {
  int u, v, w;
} edge;

typedef struct edge_list {
  edge data[MAX];
  int n;
} edge_list;

edge_list elist;

int Graph[MAX][MAX], n;
edge_list spanlist;

void kruskal(void);
int find(int presents[], int vertexno);
void applyUnion(int presents[], int c1, int c2);
void sort(void);
void print(void);

// Applying Krushkal Algo
void kruskal() {
  int presents[MAX], i, j, cn1, cn2;
  elist.n = 0;

  for (i = 1; i < n; i++)
    for (j = 0; j < i; j++) {
      if (Graph[i][j] != 0) {
        elist.data[elist.n].u = i;
        elist.data[elist.n].v = j;
        elist.data[elist.n].w = Graph[i][j];
        elist.n++;
      }
    }

  sort();

  for (i = 0; i < n; i++)
    presents[i] = i;

  spanlist.n = 0;

  for (i = 0; i < elist.n; i++) {
    cn1 = find(presents, elist.data[i].u);
    cn2 = find(presents, elist.data[i].v);

    if (cn1 != cn2) {
      spanlist.data[spanlist.n] = elist.data[i];
      spanlist.n = spanlist.n + 1;
      applyUnion(presents, cn1, cn2);
    }
  }
}

int find(int presents[], int vertexno) {
  return (presents[vertexno]);
}

void applyUnion(int presents[], int c1, int c2) {
  int i;

  for (i = 0; i < n; i++)
    if (presents[i] == c2)
      presents[i] = c1;
}

// Sorting algo
void sort(void) {
  int i, j;
  edge temp;

  for (i = 1; i < elist.n; i++)
    for (j = 0; j < elist.n - 1; j++)
      if (elist.data[j].w > elist.data[j + 1].w) {
        temp = elist.data[j];
        elist.data[j] = elist.data[j + 1];
        elist.data[j + 1] = temp;
      }
}

// Printing the result
void print(void) {
  int i, cost = 0;

  for (i = 0; i < spanlist.n; i++) {
    printf("\n%d - %d : %d", spanlist.data[i].u, spanlist.data[i].v, spanlist.data[i].w);
    cost = cost + spanlist.data[i].w;
  }

  printf("\nSpanning tree cost: %d", cost);
}

int main(void) {

  n = 6;

  Graph[0][0] = 0;
  Graph[0][1] = 7;
  Graph[0][2] = 3;
  Graph[0][3] = 0;
  Graph[0][4] = 0;
  Graph[0][5] = 6;
  Graph[0][6] = 0;

  Graph[1][0] = 7;
  Graph[1][1] = 0;
  Graph[1][2] = 8;
  Graph[1][3] = 0;
  Graph[1][4] = 0;
  Graph[1][5] = 0;
  Graph[1][6] = 0;

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
