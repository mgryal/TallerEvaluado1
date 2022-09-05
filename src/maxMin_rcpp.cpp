#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

//' @name maxMin_rcpp
//' @title maxMin_rcpp
//' Funcion para obtener el valor maximo de los valores minimos
//' entre las columnas de una matriz y las filas de otra matriz, donde
//' ambas son matrices cuadraticas
//' @param NumericMatriz de tipo nxn.
//' @param NumericMatriz de tipo nxn.
//' @export
//' @examples
//' set.seed(123)
//' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
//' matrixB <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3) 
//'  
//' matrixA
//' matrixB
//' 
//' values <- maxMin_rcpp(matrixA, matrixB)
//' values


// [[Rcpp::export]]
NumericMatrix maxMin_rcpp(NumericMatrix matrixA, NumericMatrix matrixB){
  
  
  int rowsMatrixA = matrixA.nrow();
  int colsMatrixA = matrixA.ncol();
  int colsMatrixB = matrixB.ncol();
  
  NumericMatrix newMatrix(rowsMatrixA, colsMatrixB);
  
  for(int i = 0; i < rowsMatrixA; i++){
    for(int k = 0; k < colsMatrixB; k++ ){
      NumericVector temporalVector(rowsMatrixA);
      for(int j = 0; j < colsMatrixA; j++){
        temporalVector.push_back(min(matrixA(i, j), matrixB(j, k)));
      }
      newMatrix(i,k) = max(temporalVector);
    }
  }
  return newMatrix;
}


