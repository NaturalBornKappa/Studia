suma <- function(x) {
  sum(x, na.rm=TRUE)
}
suma(sample(-50:50, 10))
suma(c(1:4, NA, NA, 15))

suma2 <- function(x, a) {
  sum(a*x, na.rm=TRUE)
}
suma2(sample(-50:50, 10), 2)

