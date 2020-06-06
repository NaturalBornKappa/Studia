f <- function(x) -x^2 + 3*x -5
curve(f, -5, 5)
optimize(f, c(-5, 5), maximum=TRUE)