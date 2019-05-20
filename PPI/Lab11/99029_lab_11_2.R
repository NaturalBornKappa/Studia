sondaz <- read.csv2("sondaz.csv")
cor(sondaz$Pow_mieszk, sondaz$dochod_gosp, use="complete.obs")
cor(sondaz[, c("Pow_mieszk", "dochod_gosp", "wiek")], use="pairwise")