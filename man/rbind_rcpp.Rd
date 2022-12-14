% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{rbind_rcpp}
\alias{rbind_rcpp}
\title{rbind_rcpp
Funcion para que un vector quede como la ultima fila de la matriz}
\arguments{
\item{NumericMatriz}{de tipo nxm.}

\item{NumericVector}{de largo m.}
}
\description{
rbind_rcpp
Funcion para que un vector quede como la ultima fila de la matriz
}
\examples{
set.seed(123)
matrixDestination <- matrix(round(runif(3^2, 0, 1), 1), nrow = 3, ncol = 3)
 
vectorSource <- c(1:3)
 
matrixDestination
vectorSource

newMatrix <- rbind_rcpp(matrixDestination, vectorSource)
newMatrix
}
