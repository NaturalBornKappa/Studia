kursy <- read.csv2("2010.csv", skip=1, nrows=50)[, c(2, 5:8, 13, 16:36)]
class(kursy)
names(kursy)
head(kursy)
dim(kursy)
summary(kursy)