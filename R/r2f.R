fmean <- function(vec = NULL) {
  if(is.null(vec)) stop("Please provide vec")
  res <- .Fortran("fmean",
    n = as.integer(length(vec)),
    vec = as.double(vec),
    mean = as.double(0),
    PACKAGE = "r2f"
  )
  res
}
