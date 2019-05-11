dane <- read.csv2("studenci.csv")
(punkty <- sample(0:5, 49, T))
(daneA <- cbind(dane, punkty))
daneB <- data.frame(punkty=c(5,4,3,2,1,0),
                    ocena=c('bdb', 'db', 'dst+', 'dst', 'ndst', 'ndst'))
(wyniki <- merge(daneA, daneB, by.x="punkty", by.y="punkty", all=T))
# podpunkt a
aggregate(wyniki$imie, list(wyniki$plec), length)
# podpunkt b
by(wyniki$ocena, wyniki$plec, table)
# podpunkt c
subset(wyniki, ocena=="ndst")
# podpunkt d
attach(wyniki)
aggregate(imie, list(plec), length)
by(ocena, plec, table)
subset(wyniki, ocena=="ndst")