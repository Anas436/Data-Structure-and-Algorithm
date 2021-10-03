// Kruskal's algorithm Implementation  in C

#include <stdio.h>

#define MAX 30

typedef struct edge {
  int a, b, c;
} edge;

typedef struct edge_list {
  edge data[MAX];
  int n;
} edge_list;

edge_list elist;

int Graph[MAX][MAX], n;
edge_list spanlist;

void KruskalAlgo();
int Find(int belongs[], int vertexno);
void ApplyUnion(int belongs[], int c1, int c2);
void Sort();
void Show();

void KruskalAlgo() {
  int belongs[MAX], i, j, cno1, cno2;
  elist.n = 0;

  for (i = 1; i < n; i++)
    for (j = 0; j < i; j++) {
      if (Graph[i][j] != 0) {
        elist.data[elist.n].a = i;
        elist.data[elist.n].b = j;
        elist.data[elist.n].c = Graph[i][j];
        elist.n++;
      }
    }

  Sort();

  for (i = 0; i < n; i++)
    belongs[i] = i;

  spanlist.n = 0;

  for (i = 0; i < elist.n; i++) {
    cno1 = Find(belongs, elist.data[i].a);
    cno2 = Find(belongs, elist.data[i].b);

    if (cno1 != cno2) {
      spanlist.data[spanlist.n] = elist.data[i];
      spanlist.n = spanlist.n + 1;
      ApplyUnion(belongs, cno1, cno2);
    }
  }
}


int Find(int belongs[], int vertexno) {
  return (belongs[vertexno]);
}

void ApplyUnion(int belongs[], int c1, int c2) {
  int i;

  for (i = 0; i < n; i++)
    if (belongs[i] == c2)
      belongs[i] = c1;
}


void Sort() {
  int i, j;
  edge temp;

  for (i = 1; i < elist.n; i++)
    for (j = 0; j < elist.n - 1; j++)
      if (elist.data[j].c > elist.data[j + 1].c) {
        temp = elist.data[j];
        elist.data[j] = elist.data[j + 1];
        elist.data[j + 1] = temp;
      }
}

void Show() {
  int i, cost = 0;

  for (i = 0; i < spanlist.n; i++) {
    printf("\n%d - %d : %d", spanlist.data[i].a, spanlist.data[i].b, spanlist.data[i].c);
    cost = cost + spanlist.data[i].c;
  }

  printf("\n\nSpanning tree cost: %d\n", cost);
}


int main() {
  int i, j;

  n = 4;

  Graph[0][0] = 0;
  Graph[0][1] = 0;
  Graph[0][2] = 0;
  Graph[0][3] = 5;
  Graph[0][4] = 9;
  Graph[0][5] = 8;
  Graph[0][6] = 0;

  Graph[1][0] = 6;
  Graph[1][1] = 6;
  Graph[1][2] = 2;
  Graph[1][3] = 9;
  Graph[1][4] = 0;
  Graph[1][5] = 3;
  Graph[1][6] = 7;

  Graph[2][0] = 4;
  Graph[2][1] = 2;
  Graph[2][2] = 0;
  Graph[2][3] = 3;
  Graph[2][4] = 4;
  Graph[2][5] = 0;
  Graph[2][6] = 0;

  Graph[3][0] = 6;
  Graph[3][1] = 8;
  Graph[3][2] = 0;
  Graph[3][3] = 0;
  Graph[3][4] = 0;
  Graph[3][5] = 8;
  Graph[3][6] = 9;

  KruskalAlgo();
  Show();
}
