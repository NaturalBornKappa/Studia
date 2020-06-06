miesiace <- seq(as.Date("2012/1/1"), as.Date("2012/12/31"), by=1)
miesiace <- format(miesiace, "%b")
miesiace <- factor(miesiace, ordered=TRUE, levels=unique(miesiace))
table(miesiace)