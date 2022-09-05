#include <Rcpp.h>
using namespace Rcpp;

//' @name whichMin_rcpp
//' @title whichMin_rcpp
//' Funcion para encontrar el/los valores minimos de una matriz,
//' un data frame con las posiciones
//' @param NumericMatriz de tipo nxm.
//' @export
//' @examples
//' set.seed(123)
//' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
//'  
//' matrixA
//' 
//' minValuesPositions <- whichMin_rcpp(matrixA)
//' minValuesPositions


// [[Rcpp::export]]
DataFrame whichMin_rcpp(NumericMatrix matrix){
  
  int matrixRowLength = matrix.nrow();
  int matrixColLength = matrix.ncol();
  
  float minValue = matrix(0,0);
  
  
  NumericVector posMinRows;
  NumericVector posMinCols;
  
  for(int i = 0; i < matrixRowLength; i++){
    for(int j = 0; j < matrixColLength; j++){
      if(matrix(i,j) <= minValue){
        minValue = matrix(i,j);
      }
    }
  }
  
  for(int i = 0; i < matrixRowLength; i++){
    for(int j = 0; j < matrixColLength; j++){
      if(matrix(i,j) <= minValue){
        posMinRows.push_back(i+1);
        posMinCols.push_back(j+1);
      }
    }
  }

  
  DataFrame minValues = DataFrame::create(
    _["rowMinValue"] = posMinRows,
    _["colMinValue"] = posMinCols
  );
  
  return minValues;
}



