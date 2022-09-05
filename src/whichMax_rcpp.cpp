#include <Rcpp.h>
using namespace Rcpp;

//' @name whichMax_rcpp
//' @title whichMax_rcpp
//' Funcion para encontrar el/los valores maximos de una matriz,
//'  un data frame con las posiciones
//' @param NumericMatriz de tipo nxm.
//' @export
//' @examples
//' set.seed(123)
//' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
//'  
//' matrixA
//' 
//' manValuesPositions <- whichMax_rcpp(matrixA)
//' manValuesPositions


// [[Rcpp::export]]
DataFrame whichMax_rcpp(NumericMatrix matrix){
  
  int matrixRowLength = matrix.nrow();
  int matrixColLength = matrix.ncol();
  
  float maxValue = matrix(0,0);
  
  
  NumericVector posMaxRows;
  NumericVector posMaxCols;
  
  for(int i = 0; i < matrixRowLength; i++){
    for(int j = 0; j < matrixColLength; j++){
      if(matrix(i,j) >= maxValue){
        maxValue = matrix(i,j);
      }
    }
  }
  
  for(int i = 0; i < matrixRowLength; i++){
    for(int j = 0; j < matrixColLength; j++){
      if(matrix(i,j) >= maxValue){
        posMaxRows.push_back(i+1);
        posMaxCols.push_back(j+1);
      }
    }
  }
  
  
  DataFrame minValues = DataFrame::create(
    _["rowMinValue"] = posMaxRows,
    _["colMinValue"] = posMaxCols
  );
  
  return minValues;
}



