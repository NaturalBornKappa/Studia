podsumuj <- function(x) {
  c(srednia = mean(x), wariancja = var(x), skosnosc = skewness(x),
    kurtoza = kurtosis(x))
}
podsumuj(rnorm(100))