wektor=c(sample(1:100,10,F))
for(i in 1 : 10)
  if(wektor[i]>50){cat(wektor[i]);cat("  pozycja:  ");cat(i);cat("\n");}
