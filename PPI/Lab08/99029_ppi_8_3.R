# podpunkt a
(x <- sample(c(letters, LETTERS), 20))
(y <- toupper(x))
# podpunkt b
(z <- sapply(1:20, function(x, y, i) as.numeric(x[i] != y[i]), x=x, y=y))
# podpunkt c
sum(z)
# podpunkt d
as.logical(z)