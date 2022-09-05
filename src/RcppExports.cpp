// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cbind_rcpp
NumericMatrix cbind_rcpp(NumericMatrix matrixDestination, NumericVector vectorSource);
RcppExport SEXP _TallerEvaluado1_cbind_rcpp(SEXP matrixDestinationSEXP, SEXP vectorSourceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matrixDestination(matrixDestinationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorSource(vectorSourceSEXP);
    rcpp_result_gen = Rcpp::wrap(cbind_rcpp(matrixDestination, vectorSource));
    return rcpp_result_gen;
END_RCPP
}
// maxMin_rcpp
NumericMatrix maxMin_rcpp(NumericMatrix matrixA, NumericMatrix matrixB);
RcppExport SEXP _TallerEvaluado1_maxMin_rcpp(SEXP matrixASEXP, SEXP matrixBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matrixA(matrixASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type matrixB(matrixBSEXP);
    rcpp_result_gen = Rcpp::wrap(maxMin_rcpp(matrixA, matrixB));
    return rcpp_result_gen;
END_RCPP
}
// multMatrix_rcpp
NumericMatrix multMatrix_rcpp(NumericMatrix matrixA, NumericMatrix matrixB);
RcppExport SEXP _TallerEvaluado1_multMatrix_rcpp(SEXP matrixASEXP, SEXP matrixBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matrixA(matrixASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type matrixB(matrixBSEXP);
    rcpp_result_gen = Rcpp::wrap(multMatrix_rcpp(matrixA, matrixB));
    return rcpp_result_gen;
END_RCPP
}
// rbind_rcpp
NumericMatrix rbind_rcpp(NumericMatrix matrixDestination, NumericVector vectorSource);
RcppExport SEXP _TallerEvaluado1_rbind_rcpp(SEXP matrixDestinationSEXP, SEXP vectorSourceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matrixDestination(matrixDestinationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorSource(vectorSourceSEXP);
    rcpp_result_gen = Rcpp::wrap(rbind_rcpp(matrixDestination, vectorSource));
    return rcpp_result_gen;
END_RCPP
}
// whichMax_rcpp
DataFrame whichMax_rcpp(NumericMatrix matrix);
RcppExport SEXP _TallerEvaluado1_whichMax_rcpp(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(whichMax_rcpp(matrix));
    return rcpp_result_gen;
END_RCPP
}
// whichMin_rcpp
DataFrame whichMin_rcpp(NumericMatrix matrix);
RcppExport SEXP _TallerEvaluado1_whichMin_rcpp(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(whichMin_rcpp(matrix));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TallerEvaluado1_cbind_rcpp", (DL_FUNC) &_TallerEvaluado1_cbind_rcpp, 2},
    {"_TallerEvaluado1_maxMin_rcpp", (DL_FUNC) &_TallerEvaluado1_maxMin_rcpp, 2},
    {"_TallerEvaluado1_multMatrix_rcpp", (DL_FUNC) &_TallerEvaluado1_multMatrix_rcpp, 2},
    {"_TallerEvaluado1_rbind_rcpp", (DL_FUNC) &_TallerEvaluado1_rbind_rcpp, 2},
    {"_TallerEvaluado1_whichMax_rcpp", (DL_FUNC) &_TallerEvaluado1_whichMax_rcpp, 1},
    {"_TallerEvaluado1_whichMin_rcpp", (DL_FUNC) &_TallerEvaluado1_whichMin_rcpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_TallerEvaluado1(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
