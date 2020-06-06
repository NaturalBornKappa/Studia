wek=c(3,5,7,9,11,13)
obj=data.frame(liczba=wek,silnia=c(1,1,1,1,1,1))
obj
for(i in 1:6){for(j in 1:obj[i,1]){obj[i,2]=obj[i,2]*j}}
obj
