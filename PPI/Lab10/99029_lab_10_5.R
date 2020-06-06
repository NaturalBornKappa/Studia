f <- function(x, n) (x - 5)^n - x
curve(f(x, n=2), -5, 15)
optimize(f, c(-5, 15), n=2)
curve(f(x, n=3), -5, 15)
optimize(f, c(-5, 15), n=3)
curve(f(x, n=4), -5, 15)
optimize(f, c(-5, 15), n=4)
curve(f(x, n=5), -5, 15)
optimize(f, c(-5, 15), n=5)