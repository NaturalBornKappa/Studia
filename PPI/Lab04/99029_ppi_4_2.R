tab=matrix(0,10,3)
tab
for(i in 1:10){tab[i,1]=i;tab[i,2]=i*i;tab[i,3]=i*i*i;}
for(i in 1:3){for(j in 1:10){sprintf("%i",tab[j,i])}; cat("\n");}