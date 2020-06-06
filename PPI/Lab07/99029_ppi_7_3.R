dane <- read.csv2("zycie.csv")
View(dane)
ogolem <- dane[1, ]
write.table(ogolem, "zycie_ogolem.txt")
miasto <- dane[18, ]
write.table(miasto, "zycie_miasto.txt")
wies <- dane[35, ]
write.table(wies, "zycie_wies.txt")

wojewodztwa <- dane[-c(1, 18, 35)]
write.table(wojewodztwa, "wojewodztwa.txt", row.names=FALSE)
write.table(wojewodztwa, "wojewodztwa.txt", row.names=1:nrow(wojewodztwa))