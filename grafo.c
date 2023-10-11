#include <stdlib.h>

#define tam 10 

typedef struct Grafo { 
    int vertices = 0;
    int arestas [tam][tam];
}grafo;

int tamanho (int a, int b) {
    if (a > b) { 
      return a;
    }
    if (b > a) {
      return b;
    }
}

void criarAresta (grafo *g, int x, int y) {
    if (x > g->vertices || y > g->vertices) {
      g->vertices = tamanho(x,y);
    }
    else
      g->arestas [x][y] = 1;
      g->arestas [y][x] = 1;
}

int main () {
  grafo *G; 
  FILE *P;
  int i;
  char a;
  char b;

  G = (grafo *) malloc (tam * sizeof (grafo));
  P = fopen("arq.txt", "r");
  while (fscanf(P,"%c",&a) != EOF) {
     for ( i=1; i < tam; i+1) {
        (fscanf(P,"%c",&b) != EOF)
      }
    return criarAresta (G, a, b);
  }
}
