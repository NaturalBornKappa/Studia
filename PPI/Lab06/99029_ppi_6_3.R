obliczenia <- function(x, y) {
  dodawanie <- function(x, y) x + y
  odejmowanie <- function(x, y) x - y
  cat("Suma =", dodawanie(x, y), "\nRoznica =", odejmowanie(x, y))
}
obliczenia(3, 6)

obliczenia2 <- function(x, y) {
  dodawanie <- function(x, y) cat("Suma =", x + y)
  odejmowanie <- function(x, y) cat("\nRoznica =", x - y)
  dodawanie(x, y)
  odejmowanie(x, y)
}
obliczenia2(3, 6)

'%dod%'<- function(x, y) x + y
'%ode%'<- function(x, y) x - y
3 %dod% 6
3 %ode% 6