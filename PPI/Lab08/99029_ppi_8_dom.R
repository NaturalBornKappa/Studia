# podpunkt a
studenci <- read.csv2("studenci.csv")
# podpunkt b
str(studenci)
studenci$gr_nr <- as.factor(studenci$gr_nr)
sapply(studenci, levels)
sapply(studenci, nlevels)
# podpunkt c
sapply(studenci, table)
# podpunkt d
tab <- table(studenci$plec, studenci$gr_nr)
addmargins(tab)
# podpunkt e
imiona <- as.character(studenci$imie)
nchar(imiona)
ile <- sapply(3:10, function(i) sum(nchar(imiona) == i))
cbind(litery=3:10, ile=ile)
# podpunkt f
(litery <- substr(imiona, 0, 1))
# podpunkt g
(l <- list(litery=litery, plec=studenci$plec, grupa=studenci$gr_nr))