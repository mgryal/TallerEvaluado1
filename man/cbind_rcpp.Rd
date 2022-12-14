% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{cbind_rcpp}
\alias{cbind_rcpp}
\title{cbind_rcpp
Funcion para que un vector quede como la ultima columna de una matriz}
\arguments{
\item{NumericMatriz}{de tipo nxm.}

\item{NumericVector}{de largo n.}
}
\description{
cbind_rcpp
Funcion para que un vector quede como la ultima columna de una matriz
}
\examples{
set.seed(123)
matrixDestination <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
 
vectorSource <- c(1:3)
 
matrixDestination
vectorSource

newMatrix <- cbind_rcpp(matrixDestination, vectorSource)
newMatrix
}
