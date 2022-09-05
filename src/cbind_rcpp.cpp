#include <Rcpp.h>
using namespace Rcpp;

//' @name cbind_rcpp
//' @title cbind_rcpp
//' Funcion para que un vector quede como la ultima columna de una matriz
//' @param NumericMatriz de tipo nxm.
//' @param NumericVector de largo n.
//' @export
//' @examples
//' set.seed(123)
//' matrixDestination <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
//'  
//' vectorSource <- c(1:3)
//'  
//' matrixDestination
//' vectorSource
//' 
//' newMatrix <- cbind_rcpp(matrixDestination, vectorSource)
//' newMatrix


// [[Rcpp::export]]
NumericMatrix cbind_rcpp(NumericMatrix matrixDestination,NumericVector vectorSource){
  
  int matrixDestinationRowLength = matrixDestination.nrow();
  int matrixDestinationColLength = matrixDestination.ncol();
  
  int vectorSourceLength = vectorSource.size();
  
  NumericMatrix newMatrix(matrixDestinationRowLength, matrixDestinationColLength + 1);
  NumericVector auxiliarVector;
  
  //Agregar trhow
  if(matrixDestinationRowLength != vectorSourceLength)return EXIT_FAILURE;
  for(int i = 0; i < vectorSourceLength; i++){
    
    auxiliarVector = matrixDestination.row(i);
    auxiliarVector.push_back(vectorSource(i));
    newMatrix.row(i) = auxiliarVector;
  }
  return newMatrix;
  
}


