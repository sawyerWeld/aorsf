// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// leaf_kaplan_testthat
arma::mat leaf_kaplan_testthat(const arma::mat& y, const arma::vec& w);
RcppExport SEXP _aorsf_leaf_kaplan_testthat(SEXP ySEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(leaf_kaplan_testthat(y, w));
    return rcpp_result_gen;
END_RCPP
}
// cholesky_testthat
arma::vec cholesky_testthat(NumericMatrix& vmat_, NumericVector& u_);
RcppExport SEXP _aorsf_cholesky_testthat(SEXP vmat_SEXP, SEXP u_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type vmat_(vmat_SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type u_(u_SEXP);
    rcpp_result_gen = Rcpp::wrap(cholesky_testthat(vmat_, u_));
    return rcpp_result_gen;
END_RCPP
}
// newtraph_cph_testthat
arma::vec newtraph_cph_testthat(NumericMatrix& x_in, NumericMatrix& y_in, NumericVector& w_in, int method, double cph_eps_, double pval_max, int iter_max);
RcppExport SEXP _aorsf_newtraph_cph_testthat(SEXP x_inSEXP, SEXP y_inSEXP, SEXP w_inSEXP, SEXP methodSEXP, SEXP cph_eps_SEXP, SEXP pval_maxSEXP, SEXP iter_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_in(x_inSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type y_in(y_inSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type w_in(w_inSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type cph_eps_(cph_eps_SEXP);
    Rcpp::traits::input_parameter< double >::type pval_max(pval_maxSEXP);
    Rcpp::traits::input_parameter< int >::type iter_max(iter_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(newtraph_cph_testthat(x_in, y_in, w_in, method, cph_eps_, pval_max, iter_max));
    return rcpp_result_gen;
END_RCPP
}
// lrt_multi_testthat
List lrt_multi_testthat(NumericMatrix& y_node_, NumericVector& w_node_, NumericVector& XB_, int n_split_, int leaf_min_events_, int leaf_min_obs_);
RcppExport SEXP _aorsf_lrt_multi_testthat(SEXP y_node_SEXP, SEXP w_node_SEXP, SEXP XB_SEXP, SEXP n_split_SEXP, SEXP leaf_min_events_SEXP, SEXP leaf_min_obs_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type y_node_(y_node_SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type w_node_(w_node_SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type XB_(XB_SEXP);
    Rcpp::traits::input_parameter< int >::type n_split_(n_split_SEXP);
    Rcpp::traits::input_parameter< int >::type leaf_min_events_(leaf_min_events_SEXP);
    Rcpp::traits::input_parameter< int >::type leaf_min_obs_(leaf_min_obs_SEXP);
    rcpp_result_gen = Rcpp::wrap(lrt_multi_testthat(y_node_, w_node_, XB_, n_split_, leaf_min_events_, leaf_min_obs_));
    return rcpp_result_gen;
END_RCPP
}
// ostree_pred_leaf_testthat
arma::uvec ostree_pred_leaf_testthat(List& tree, NumericMatrix& x_oobag_);
RcppExport SEXP _aorsf_ostree_pred_leaf_testthat(SEXP treeSEXP, SEXP x_oobag_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_oobag_(x_oobag_SEXP);
    rcpp_result_gen = Rcpp::wrap(ostree_pred_leaf_testthat(tree, x_oobag_));
    return rcpp_result_gen;
END_RCPP
}
// orsf_fit
List orsf_fit(NumericMatrix& x, NumericMatrix& y, const int& n_tree, const int& n_split_, const int& mtry_, const double& leaf_min_events_, const double& leaf_min_obs_, const int& cph_method_, const double& cph_eps_, const int& cph_iter_max_, const double& cph_pval_max_, const bool& cph_do_scale_, const bool& oobag_pred_, const double& oobag_time_, const int& oobag_eval_every_);
RcppExport SEXP _aorsf_orsf_fit(SEXP xSEXP, SEXP ySEXP, SEXP n_treeSEXP, SEXP n_split_SEXP, SEXP mtry_SEXP, SEXP leaf_min_events_SEXP, SEXP leaf_min_obs_SEXP, SEXP cph_method_SEXP, SEXP cph_eps_SEXP, SEXP cph_iter_max_SEXP, SEXP cph_pval_max_SEXP, SEXP cph_do_scale_SEXP, SEXP oobag_pred_SEXP, SEXP oobag_time_SEXP, SEXP oobag_eval_every_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type n_tree(n_treeSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_split_(n_split_SEXP);
    Rcpp::traits::input_parameter< const int& >::type mtry_(mtry_SEXP);
    Rcpp::traits::input_parameter< const double& >::type leaf_min_events_(leaf_min_events_SEXP);
    Rcpp::traits::input_parameter< const double& >::type leaf_min_obs_(leaf_min_obs_SEXP);
    Rcpp::traits::input_parameter< const int& >::type cph_method_(cph_method_SEXP);
    Rcpp::traits::input_parameter< const double& >::type cph_eps_(cph_eps_SEXP);
    Rcpp::traits::input_parameter< const int& >::type cph_iter_max_(cph_iter_max_SEXP);
    Rcpp::traits::input_parameter< const double& >::type cph_pval_max_(cph_pval_max_SEXP);
    Rcpp::traits::input_parameter< const bool& >::type cph_do_scale_(cph_do_scale_SEXP);
    Rcpp::traits::input_parameter< const bool& >::type oobag_pred_(oobag_pred_SEXP);
    Rcpp::traits::input_parameter< const double& >::type oobag_time_(oobag_time_SEXP);
    Rcpp::traits::input_parameter< const int& >::type oobag_eval_every_(oobag_eval_every_SEXP);
    rcpp_result_gen = Rcpp::wrap(orsf_fit(x, y, n_tree, n_split_, mtry_, leaf_min_events_, leaf_min_obs_, cph_method_, cph_eps_, cph_iter_max_, cph_pval_max_, cph_do_scale_, oobag_pred_, oobag_time_, oobag_eval_every_));
    return rcpp_result_gen;
END_RCPP
}
// orsf_pred_uni
arma::mat orsf_pred_uni(List& forest, NumericMatrix& x_new, double time_dbl, bool return_risk);
RcppExport SEXP _aorsf_orsf_pred_uni(SEXP forestSEXP, SEXP x_newSEXP, SEXP time_dblSEXP, SEXP return_riskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_new(x_newSEXP);
    Rcpp::traits::input_parameter< double >::type time_dbl(time_dblSEXP);
    Rcpp::traits::input_parameter< bool >::type return_risk(return_riskSEXP);
    rcpp_result_gen = Rcpp::wrap(orsf_pred_uni(forest, x_new, time_dbl, return_risk));
    return rcpp_result_gen;
END_RCPP
}
// orsf_pred_multi
arma::mat orsf_pred_multi(List& forest, NumericMatrix& x_new, NumericVector& time_vec, bool return_risk);
RcppExport SEXP _aorsf_orsf_pred_multi(SEXP forestSEXP, SEXP x_newSEXP, SEXP time_vecSEXP, SEXP return_riskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_new(x_newSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type time_vec(time_vecSEXP);
    Rcpp::traits::input_parameter< bool >::type return_risk(return_riskSEXP);
    rcpp_result_gen = Rcpp::wrap(orsf_pred_multi(forest, x_new, time_vec, return_risk));
    return rcpp_result_gen;
END_RCPP
}
// pd_new_smry
arma::mat pd_new_smry(List& forest, NumericMatrix& x_new_, IntegerVector& x_cols_, NumericMatrix& x_vals_, NumericVector& probs_, const double time_dbl, const bool return_risk);
RcppExport SEXP _aorsf_pd_new_smry(SEXP forestSEXP, SEXP x_new_SEXP, SEXP x_cols_SEXP, SEXP x_vals_SEXP, SEXP probs_SEXP, SEXP time_dblSEXP, SEXP return_riskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_new_(x_new_SEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type x_cols_(x_cols_SEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_vals_(x_vals_SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type probs_(probs_SEXP);
    Rcpp::traits::input_parameter< const double >::type time_dbl(time_dblSEXP);
    Rcpp::traits::input_parameter< const bool >::type return_risk(return_riskSEXP);
    rcpp_result_gen = Rcpp::wrap(pd_new_smry(forest, x_new_, x_cols_, x_vals_, probs_, time_dbl, return_risk));
    return rcpp_result_gen;
END_RCPP
}
// pd_oob_smry
arma::mat pd_oob_smry(List& forest, NumericMatrix& x_new_, IntegerVector& x_cols_, NumericMatrix& x_vals_, NumericVector& probs_, const double time_dbl, const bool return_risk);
RcppExport SEXP _aorsf_pd_oob_smry(SEXP forestSEXP, SEXP x_new_SEXP, SEXP x_cols_SEXP, SEXP x_vals_SEXP, SEXP probs_SEXP, SEXP time_dblSEXP, SEXP return_riskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_new_(x_new_SEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type x_cols_(x_cols_SEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_vals_(x_vals_SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type probs_(probs_SEXP);
    Rcpp::traits::input_parameter< const double >::type time_dbl(time_dblSEXP);
    Rcpp::traits::input_parameter< const bool >::type return_risk(return_riskSEXP);
    rcpp_result_gen = Rcpp::wrap(pd_oob_smry(forest, x_new_, x_cols_, x_vals_, probs_, time_dbl, return_risk));
    return rcpp_result_gen;
END_RCPP
}
// pd_new_ice
arma::mat pd_new_ice(List& forest, NumericMatrix& x_new_, IntegerVector& x_cols_, NumericMatrix& x_vals_, NumericVector& probs_, const double time_dbl, const bool return_risk);
RcppExport SEXP _aorsf_pd_new_ice(SEXP forestSEXP, SEXP x_new_SEXP, SEXP x_cols_SEXP, SEXP x_vals_SEXP, SEXP probs_SEXP, SEXP time_dblSEXP, SEXP return_riskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_new_(x_new_SEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type x_cols_(x_cols_SEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_vals_(x_vals_SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type probs_(probs_SEXP);
    Rcpp::traits::input_parameter< const double >::type time_dbl(time_dblSEXP);
    Rcpp::traits::input_parameter< const bool >::type return_risk(return_riskSEXP);
    rcpp_result_gen = Rcpp::wrap(pd_new_ice(forest, x_new_, x_cols_, x_vals_, probs_, time_dbl, return_risk));
    return rcpp_result_gen;
END_RCPP
}
// pd_oob_ice
arma::mat pd_oob_ice(List& forest, NumericMatrix& x_new_, IntegerVector& x_cols_, NumericMatrix& x_vals_, NumericVector& probs_, const double time_dbl, const bool return_risk);
RcppExport SEXP _aorsf_pd_oob_ice(SEXP forestSEXP, SEXP x_new_SEXP, SEXP x_cols_SEXP, SEXP x_vals_SEXP, SEXP probs_SEXP, SEXP time_dblSEXP, SEXP return_riskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_new_(x_new_SEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type x_cols_(x_cols_SEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_vals_(x_vals_SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type probs_(probs_SEXP);
    Rcpp::traits::input_parameter< const double >::type time_dbl(time_dblSEXP);
    Rcpp::traits::input_parameter< const bool >::type return_risk(return_riskSEXP);
    rcpp_result_gen = Rcpp::wrap(pd_oob_ice(forest, x_new_, x_cols_, x_vals_, probs_, time_dbl, return_risk));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_aorsf_leaf_kaplan_testthat", (DL_FUNC) &_aorsf_leaf_kaplan_testthat, 2},
    {"_aorsf_cholesky_testthat", (DL_FUNC) &_aorsf_cholesky_testthat, 2},
    {"_aorsf_newtraph_cph_testthat", (DL_FUNC) &_aorsf_newtraph_cph_testthat, 7},
    {"_aorsf_lrt_multi_testthat", (DL_FUNC) &_aorsf_lrt_multi_testthat, 6},
    {"_aorsf_ostree_pred_leaf_testthat", (DL_FUNC) &_aorsf_ostree_pred_leaf_testthat, 2},
    {"_aorsf_orsf_fit", (DL_FUNC) &_aorsf_orsf_fit, 15},
    {"_aorsf_orsf_pred_uni", (DL_FUNC) &_aorsf_orsf_pred_uni, 4},
    {"_aorsf_orsf_pred_multi", (DL_FUNC) &_aorsf_orsf_pred_multi, 4},
    {"_aorsf_pd_new_smry", (DL_FUNC) &_aorsf_pd_new_smry, 7},
    {"_aorsf_pd_oob_smry", (DL_FUNC) &_aorsf_pd_oob_smry, 7},
    {"_aorsf_pd_new_ice", (DL_FUNC) &_aorsf_pd_new_ice, 7},
    {"_aorsf_pd_oob_ice", (DL_FUNC) &_aorsf_pd_oob_ice, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_aorsf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
