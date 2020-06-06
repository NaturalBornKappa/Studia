w1 <- polynomial(c(16, 0, -17, 0, 1))
w2 <- polynomial(c(4, -5, 1))
deriv(w1/w2)
integral(w1/w2, c(0, 1.5))