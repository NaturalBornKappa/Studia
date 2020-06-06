A <- matrix(c(1, 2, 1, 5, 0, 2, 3, 5, 1), nrow=3)
# podpunkt a
det(A)
eigen(A)
# podpunkt b
colSums(A)
colMeans(A)
# podpunkt c
A[, order(A[2, ])]