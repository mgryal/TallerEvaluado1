#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

//' @name multMatrix_rcpp
//' @title multMatrix_rcpp
//' Funcion para multiplicar dos matrices
//' @param NumericMatriz de tipo nxm.
//' @param NumericMatriz de tipo mxn.
//' @export
//' @examples
//' set.seed(123)
//' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
//' matrixB <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3) 
//'  
//' matrixA
//' matrixB
//' 
//' newMatrix <- multMatrix_rcpp(matrixA, matrixB)
//' newMatrix


// [[Rcpp::export]]
NumericMatrix multMatrix_rcpp(NumericMatrix matrixA, NumericMatrix matrixB){
  int rowsMatrixA = matrixA.nrow();
  int colsMatrixA = matrixA.ncol();
  int rowsMatrixB = matrixB.nrow();
  int colsMatrixB = matrixB.ncol();
  NumericMatrix newMatrix (rowsMatrixA, colsMatrixB);
  
  if(rowsMatrixA != colsMatrixB) return EXIT_FAILURE;
  
  for(int i = 0; i < rowsMatrixA; i++){
    for(int j = 0; j < colsMatrixB;j++){
      for(int k = 0;k < colsMatrixA;k++){
        newMatrix(i,j) += matrixA(i,k) * matrixB(k,j);
      }
    }
  }
  
  return newMatrix;

}

