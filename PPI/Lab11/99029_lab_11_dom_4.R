sondaz <- read.csv2("sondaz.csv")
quantile(sondaz$doch_z_pracy_respondenta, na.rm=TRUE)
quantile(sondaz$doch_z_pracy_respondenta, seq(0, 1, 0.01), na.rm=TRUE)
quantile(sondaz$doch_z_pracy_respondenta, c(0.1, 0.25, 0.5, 0.75, 0.9), na.rm=TRUE)