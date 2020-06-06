oceny=c("bdb", "db", "dst", "dst", "ndst", "bdb","db", "dst", "db", "bdb", "dst", "dst", "db", "dst", "db", "bdb", "dst", "ndst", "db", "db", "ndst", "db", "dst", "db", "dst")
bdb = 0
db = 0
dst = 0
ndst = 0
for(i in 1 : 25){
  if(oceny[i]=="bdb"){bdb <- bdb+1;} else if(oceny[i]=="db"){db<-db+1;} else if (oceny[i]=="dst"){dst<-dst+1;} else if(oceny[i]=="ndst"){ndst<-ndst+1;}}