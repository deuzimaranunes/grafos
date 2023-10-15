#include <stdio.h>
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

  G = (grafo *) malloc (tam * sizeof (grafo));
  P = fopen("arq.txt", "w");
  
    return criarAresta (G, 1, 2);
  }
}
