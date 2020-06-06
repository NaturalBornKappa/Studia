maxmin <- function(x) {
  n <- length(x)
  if (n < 3)
    stop("Argument jest za krotki")
  xs <- sort(x)
  list(min=xs[1:3], max=xs[(n-2):n])
}
#testy
wek <- c(1,2,3,4,5,6,7)
maxmin(wek)
wek2 <- c(1,9)
maxmin(wek2)