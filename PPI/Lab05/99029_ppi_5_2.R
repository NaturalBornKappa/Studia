x <- lapply(1:5, runif)
y <- lapply(1:5, runif)
lapply(1:5, function(x, y, i) x[[i]] + y[[i]], x=x, y=y)