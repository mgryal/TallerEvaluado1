#include <Rcpp.h>
using namespace Rcpp;

//' @name rbind_rcpp
//' @title rbind_rcpp
//' Funcion para que un vector quede como la ultima fila de la matriz
//' @param NumericMatriz de tipo nxm.
//' @param NumericVector de largo m.
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
//' newMatrix <- rbind_rcpp(matrixDestination, vectorSource)
//' newMatrix


// [[Rcpp::export]]
NumericMatrix rbind_rcpp(NumericMatrix matrixDestination,NumericVector vectorSource){
  
  
  int matrixDestinationRowLength = matrixDestination.nrow();
  int matrixDestinationColLength = matrixDestination.ncol();
  
  int vectorSourceLength = vectorSource.size();
  
  NumericMatrix newMatrix(matrixDestinationRowLength + 1, matrixDestinationColLength);
  NumericVector auxiliarVector;
  //Agregar trhow
  if(matrixDestinationRowLength != vectorSourceLength)return EXIT_FAILURE;
  
  for(int i = 0; i < vectorSourceLength; i++){
    auxiliarVector = matrixDestination.column(i);
    auxiliarVector.push_back(vectorSource(i));
    newMatrix.column(i) = auxiliarVector;
  }
  return newMatrix;
  
}
