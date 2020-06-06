poczatek <- function(x, n) {
  if (is.vector(x)) {
    if (length(x) < n) {
      stop("Argument za krotki")
    } else {
      x[1:n]
    }
  } else if (is.matrix(x) | is.data.frame(x)) {
    if (nrow(x) < n | ncol(x) < n) {
      stop("Za maly wymiar")
    } else {
      x[1:n, 1:n]
    }
  }
}
poczatek(1:10, 3)
poczatek(1:2, 3)
X <- cbind(y <- seq(1, 20, 3), rev(y), 2*(0:6) + 10, 
           c(2*y[1:3] - 8, 1:4))
poczatek(X, 3)
poczatek(X, 10)