localMax <- function(x) {
  wiersze <<- apply(x, 2, which.max)
  print(x[wiersze, ])
}
wek1 <- seq(1, 20, by=3)
wek2 <- rev(wek1) #wek1 w odwrotnej kolejnosci
wek3 <- seq(10, by=2, length.out=7)
wek4 <- c(2*wek1[1:3]-8, 1:4)
(macierz <- cbind(wek1, wek2, wek3, wek4))
localMax(macierz)

wiersze