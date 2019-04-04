maxmin2 <- function(x, ile=5) {
  n <- length(x)
  if (n < ile)
    stop("Argument jest za krotki")
  xs <- sort(x)
  list(min=xs[1:ile], max=xs[(n-ile+1):n])
}
#testy
wek <- c(1,2,3,4,5,6,7)
maxmin2(wek)