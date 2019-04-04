maxKol <- function(X) {
  wiersze <- apply(X, 2, which.max)
  X[wiersze, ]
}
X <- cbind(y <- seq(1, 20, 3), rev(y), 2*(0:6) + 10, 
           c(2*y[1:3] - 8, 1:4))
maxKol(X)