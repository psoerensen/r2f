#include <R.h>
#include <Rinternals.h>


/* .Fortran calls */
extern void F77_NAME(fmean)(int *n, double *vec, double *mean);

static const R_FortranMethodDef FortranEntries[] = {
    {"fmean",     (DL_FUNC) &F77_NAME(fmean),      3},
    {NULL, NULL, 0}
};
