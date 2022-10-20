// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// qscl
Rcpp::NumericVector qscl(Rcpp::NumericVector p, const double M, double const k, const double precision, const bool lower, const bool log_p, const bool force);
RcppExport SEXP _mclle_qscl(SEXP pSEXP, SEXP MSEXP, SEXP kSEXP, SEXP precisionSEXP, SEXP lowerSEXP, SEXP log_pSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double const >::type k(kSEXP);
    Rcpp::traits::input_parameter< const double >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< const bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const bool >::type log_p(log_pSEXP);
    Rcpp::traits::input_parameter< const bool >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(qscl(p, M, k, precision, lower, log_p, force));
    return rcpp_result_gen;
END_RCPP
}
// pscl
Rcpp::NumericVector pscl(Rcpp::NumericVector q, const double M, const double k, const double precision, const bool lower, const bool log_p, const bool force);
RcppExport SEXP _mclle_pscl(SEXP qSEXP, SEXP MSEXP, SEXP kSEXP, SEXP precisionSEXP, SEXP lowerSEXP, SEXP log_pSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type M(MSEXP);
    Rcpp::traits::input_parameter< const double >::type k(kSEXP);
    Rcpp::traits::input_parameter< const double >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< const bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const bool >::type log_p(log_pSEXP);
    Rcpp::traits::input_parameter< const bool >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(pscl(q, M, k, precision, lower, log_p, force));
    return rcpp_result_gen;
END_RCPP
}
// rscl
Rcpp::NumericVector rscl(const int n, const double M, const double k);
RcppExport SEXP _mclle_rscl(SEXP nSEXP, SEXP MSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type M(MSEXP);
    Rcpp::traits::input_parameter< const double >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rscl(n, M, k));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mclle_qscl", (DL_FUNC) &_mclle_qscl, 7},
    {"_mclle_pscl", (DL_FUNC) &_mclle_pscl, 7},
    {"_mclle_rscl", (DL_FUNC) &_mclle_rscl, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_mclle(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
