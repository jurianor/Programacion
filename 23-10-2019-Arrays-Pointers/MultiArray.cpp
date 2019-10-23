#include <iostream>

int main(void)
{
  //Declarar la matriz
  const int M=90, N=90;
 //M filas de alto, N columnas.
  int A[M][N] = {{0}};
  //Todos los elementos son 0, pero hay doble corchete dado que de esta manera se llena la matriz multilineal.
  int AT[N][M] = {{0}};
  int ii, jj;

  for(ii=0; ii < M; ++ii){
    for(jj=0; jj < N; ++jj){
      A[ii][jj] = ii*N +jj;
    }
  }

  std::cout << "Original Matrix : \n";
    for(ii=0; ii < M; ++ii){
      for(jj=0; jj < N; ++jj){
	std::cout << A[ii][jj] << "  ";
      }
      std::cout << "\n";
  }

  //Procesarla. En este caso, transponerla.
    for(ii = 0; ii < N; ++ii){
      for(jj=0; jj < M; ++jj){
	AT[jj][ii] = A[ii][jj];
      }
    }

  //Impresion
  std::cout << "Transposed Matrix : \n";
    for(ii=0; ii < N; ++ii){
      for(jj=0; jj < M; ++jj){
	std::cout << A[jj][ii] << "  ";
      }
      std::cout << "\n";
  }

  return 0;
}
