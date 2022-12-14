# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' @name cbind_rcpp
#' @title cbind_rcpp
#' Funcion para que un vector quede como la ultima columna de una matriz
#' @param NumericMatriz de tipo nxm.
#' @param NumericVector de largo n.
#' @export
#' @examples
#' set.seed(123)
#' matrixDestination <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
#'  
#' vectorSource <- c(1:3)
#'  
#' matrixDestination
#' vectorSource
#' 
#' newMatrix <- cbind_rcpp(matrixDestination, vectorSource)
#' newMatrix
NULL

cbind_rcpp <- function(matrixDestination, vectorSource) {
    .Call('_TallerEvaluado1_cbind_rcpp', PACKAGE = 'TallerEvaluado1', matrixDestination, vectorSource)
}

#' @name maxMin_rcpp
#' @title maxMin_rcpp
#' Funcion para obtener el valor maximo de los valores minimos
#' entre las columnas de una matriz y las filas de otra matriz, donde
#' ambas son matrices cuadraticas
#' @param NumericMatriz de tipo nxn.
#' @param NumericMatriz de tipo nxn.
#' @export
#' @examples
#' set.seed(123)
#' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
#' matrixB <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3) 
#'  
#' matrixA
#' matrixB
#' 
#' values <- maxMin_rcpp(matrixA, matrixB)
#' values
NULL

maxMin_rcpp <- function(matrixA, matrixB) {
    .Call('_TallerEvaluado1_maxMin_rcpp', PACKAGE = 'TallerEvaluado1', matrixA, matrixB)
}

#' @name multMatrix_rcpp
#' @title multMatrix_rcpp
#' Funcion para multiplicar dos matrices
#' @param NumericMatriz de tipo nxm.
#' @param NumericMatriz de tipo mxn.
#' @export
#' @examples
#' set.seed(123)
#' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
#' matrixB <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3) 
#'  
#' matrixA
#' matrixB
#' 
#' newMatrix <- multMatrix_rcpp(matrixA, matrixB)
#' newMatrix
NULL

multMatrix_rcpp <- function(matrixA, matrixB) {
    .Call('_TallerEvaluado1_multMatrix_rcpp', PACKAGE = 'TallerEvaluado1', matrixA, matrixB)
}

#' @name rbind_rcpp
#' @title rbind_rcpp
#' Funcion para que un vector quede como la ultima fila de la matriz
#' @param NumericMatriz de tipo nxm.
#' @param NumericVector de largo m.
#' @export
#' @examples
#' set.seed(123)
#' matrixDestination <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
#'  
#' vectorSource <- c(1:3)
#'  
#' matrixDestination
#' vectorSource
#' 
#' newMatrix <- rbind_rcpp(matrixDestination, vectorSource)
#' newMatrix
NULL

rbind_rcpp <- function(matrixDestination, vectorSource) {
    .Call('_TallerEvaluado1_rbind_rcpp', PACKAGE = 'TallerEvaluado1', matrixDestination, vectorSource)
}

#' @name whichMax_rcpp
#' @title whichMax_rcpp
#' Funcion para encontrar el/los valores maximos de una matriz,
#'  un data frame con las posiciones
#' @param NumericMatriz de tipo nxm.
#' @export
#' @examples
#' set.seed(123)
#' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
#'  
#' matrixA
#' 
#' manValuesPositions <- whichMax_rcpp(matrixA)
#' manValuesPositions
NULL

whichMax_rcpp <- function(matrix) {
    .Call('_TallerEvaluado1_whichMax_rcpp', PACKAGE = 'TallerEvaluado1', matrix)
}

#' @name whichMin_rcpp
#' @title whichMin_rcpp
#' Funcion para encontrar el/los valores minimos de una matriz,
#' un data frame con las posiciones
#' @param NumericMatriz de tipo nxm.
#' @export
#' @examples
#' set.seed(123)
#' matrixA <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
#'  
#' matrixA
#' 
#' minValuesPositions <- whichMin_rcpp(matrixA)
#' minValuesPositions
NULL

whichMin_rcpp <- function(matrix) {
    .Call('_TallerEvaluado1_whichMin_rcpp', PACKAGE = 'TallerEvaluado1', matrix)
}

