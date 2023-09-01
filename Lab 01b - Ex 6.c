// Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.

#include<stdio.h>
#include<stdlib.h>

void matrizTransposta(int tamanhoLinha, int tamanhoColuna, int transposta[tamanhoColuna][tamanhoLinha])
{
  int linha;
  int coluna;
  int aux;
  int indice = 1;
  int tamanho;

  if (tamanhoLinha > tamanhoColuna)
  {
    tamanho = tamanhoLinha;
  }

  else
  {
    tamanho = tamanhoColuna;
  }

  int matriz[tamanho][tamanho];
  
  for (linha = 0; linha < tamanho; linha++)
  {
    for (coluna = 0; coluna < tamanho; coluna++)
    {
      matriz[linha][coluna] = 0;
    }
  }

  printf("\n");

  for (linha = 0; linha < tamanho; linha++)
  {
    for (coluna = 0; coluna < tamanho; coluna++)
    {
      printf("%d\t", matriz[linha][coluna]);
    }
    printf("\n\n");
  }

  for (linha = 0; linha < tamanhoLinha; linha++)
  {
    for (coluna = 0; coluna < tamanhoColuna; coluna++)
    {
      printf("\nPreencha o valor [%d][%d]\n", linha + 1, coluna + 1);

      scanf("%d", &matriz[linha][coluna]);
    }
  }

  printf("\nMatriz inicial\n\n");

  for (linha = 0; linha < tamanho; linha++)
  {
    for (coluna = 0; coluna < tamanho; coluna++)
    {
      printf("%d\t", matriz[linha][coluna]);
    }
    printf("\n\n");
  }

  for (linha = 0; linha < tamanho; linha++) {
    for (coluna = linha + 1; coluna < tamanho; coluna++) {
        aux = matriz[linha][coluna];
        matriz[linha][coluna] = matriz[coluna][linha];
        matriz[coluna][linha] = aux;
    }
}

  for (linha = 0; linha < tamanhoColuna; linha++) {
      for (coluna = 0; coluna < tamanhoLinha; coluna++) {
          transposta[linha][coluna] = matriz[linha][coluna];
      }
}
 printf("\nMatriz final\n\n");

  for (linha = 0; linha < tamanho; linha++)
  {
    for (coluna = 0; coluna < tamanho; coluna++)
    {
      printf("%d\t", matriz[linha][coluna]);
    }
    printf("\n\n");
  }
  
  printf("\nMatriz Transposta\n\n");

  for (linha = 0; linha < tamanhoColuna; linha++)
  {
    for (coluna = 0; coluna < tamanhoLinha; coluna++)
    {
      printf("%d\t", transposta[linha][coluna]);
    }
    printf("\n\n");
  }
}

int main()
{
  int tamanhoLinha;
  int tamanhoColuna;

  printf("\nDigite o número de linhas desejado\n");

  scanf("%d", &tamanhoLinha);

  printf("\nDigite o número de colunas desejado\n");

  scanf("%d", &tamanhoColuna);

  int transposta[tamanhoLinha][tamanhoColuna];

  matrizTransposta(tamanhoLinha, tamanhoColuna, transposta);

  return 0;
}
