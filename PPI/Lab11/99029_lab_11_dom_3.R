ludnosc <- read.csv2("ludnosc.csv")
apply(ludnosc[, -1], 1, which.max)
dane <- data.frame(woj=ludnosc[, 1], wiek=colnames(ludnosc)[12], ludnosc=ludnosc[, 12])
dane
