// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// has_xattrs
bool has_xattrs(const std::string path, bool follow_symlinks);
RcppExport SEXP _xattrs_has_xattrs(SEXP pathSEXP, SEXP follow_symlinksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type follow_symlinks(follow_symlinksSEXP);
    rcpp_result_gen = Rcpp::wrap(has_xattrs(path, follow_symlinks));
    return rcpp_result_gen;
END_RCPP
}
// list_xattrs
CharacterVector list_xattrs(const std::string path, bool follow_symlinks);
RcppExport SEXP _xattrs_list_xattrs(SEXP pathSEXP, SEXP follow_symlinksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type follow_symlinks(follow_symlinksSEXP);
    rcpp_result_gen = Rcpp::wrap(list_xattrs(path, follow_symlinks));
    return rcpp_result_gen;
END_RCPP
}
// get_xattr
CharacterVector get_xattr(const std::string path, std::string name, bool follow_symlinks);
RcppExport SEXP _xattrs_get_xattr(SEXP pathSEXP, SEXP nameSEXP, SEXP follow_symlinksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type follow_symlinks(follow_symlinksSEXP);
    rcpp_result_gen = Rcpp::wrap(get_xattr(path, name, follow_symlinks));
    return rcpp_result_gen;
END_RCPP
}
// get_xattr_raw
RawVector get_xattr_raw(const std::string path, std::string name, bool follow_symlinks);
RcppExport SEXP _xattrs_get_xattr_raw(SEXP pathSEXP, SEXP nameSEXP, SEXP follow_symlinksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type follow_symlinks(follow_symlinksSEXP);
    rcpp_result_gen = Rcpp::wrap(get_xattr_raw(path, name, follow_symlinks));
    return rcpp_result_gen;
END_RCPP
}
// get_xattr_size
ssize_t get_xattr_size(const std::string path, std::string name, bool follow_symlinks);
RcppExport SEXP _xattrs_get_xattr_size(SEXP pathSEXP, SEXP nameSEXP, SEXP follow_symlinksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type follow_symlinks(follow_symlinksSEXP);
    rcpp_result_gen = Rcpp::wrap(get_xattr_size(path, name, follow_symlinks));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_xattr_df
List rcpp_get_xattr_df(const std::string path, bool follow_symlinks);
RcppExport SEXP _xattrs_rcpp_get_xattr_df(SEXP pathSEXP, SEXP follow_symlinksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type follow_symlinks(follow_symlinksSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_xattr_df(path, follow_symlinks));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_xattrs_has_xattrs", (DL_FUNC) &_xattrs_has_xattrs, 2},
    {"_xattrs_list_xattrs", (DL_FUNC) &_xattrs_list_xattrs, 2},
    {"_xattrs_get_xattr", (DL_FUNC) &_xattrs_get_xattr, 3},
    {"_xattrs_get_xattr_raw", (DL_FUNC) &_xattrs_get_xattr_raw, 3},
    {"_xattrs_get_xattr_size", (DL_FUNC) &_xattrs_get_xattr_size, 3},
    {"_xattrs_rcpp_get_xattr_df", (DL_FUNC) &_xattrs_rcpp_get_xattr_df, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_xattrs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}