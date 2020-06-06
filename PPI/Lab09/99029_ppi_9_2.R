1:3 %*% t(3:6)
A <- outer(1:3, 3:6)
# podpunkt a
kronecker(A, diag(3))
# podpunkt b
B <- outer(5:8, 2:4)
all(t(kronecker(A, B)) == kronecker(t(A), t(B)))