// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// hungarian_cc
arma::imat hungarian_cc(Rcpp::NumericMatrix cost);
RcppExport SEXP _hexmapr_hungarian_cc(SEXP costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type cost(costSEXP);
    rcpp_result_gen = Rcpp::wrap(hungarian_cc(cost));
    return rcpp_result_gen;
END_RCPP
}
// hungariansafe_cc
arma::imat hungariansafe_cc(Rcpp::NumericMatrix cost);
RcppExport SEXP _hexmapr_hungariansafe_cc(SEXP costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type cost(costSEXP);
    rcpp_result_gen = Rcpp::wrap(hungariansafe_cc(cost));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hexmapr_hungarian_cc", (DL_FUNC) &_hexmapr_hungarian_cc, 1},
    {"_hexmapr_hungariansafe_cc", (DL_FUNC) &_hexmapr_hungariansafe_cc, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_hexmapr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
