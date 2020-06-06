obiekt=data.frame(wektor=c("a","b","c","d","e"),suma=c(0,0,0,0,0),œrednia=c(0,0,0,0,0),najwiêksza=c(0,0,0,0,0),najmniejsza=c(0,0,0,0,0))
a=c(1,2,3,4,5,6,7)
b=c(-5,-4,-3,-2,-1,0,1,2,3,4,5,6)
c=c(0,1,0,1,0,1,0,1)
d=c(-1,0,1,2,-1,0,1,2)
e=c(5,5,5,6,6,6,7,7,7)
for(i in 1:7){obiekt[1,2]=obiekt[1,2]+a[i]}
obiekt[1,3]=obiekt[1,2]/7
for(i in 1:12){obiekt[2,2]=obiekt[2,2]+b[i]}
obiekt[2,3]=obiekt[2,2]/12
for(i in 1:8){obiekt[3,2]=obiekt[3,2]+c[i]}
obiekt[3,3]=obiekt[3,2]/8
for(i in 1:8){obiekt[4,2]=obiekt[4,2]+d[i]}
obiekt[4,3]=obiekt[4,2]/8
for(i in 1:9){obiekt[5,2]=obiekt[5,2]+e[i]}
obiekt[5,3]=obiekt[5,2]/9
obiekt
obiekt[1,4]=a[1]
obiekt[1,5]=a[1]
obiekt[2,4]=b[1]
obiekt[3,4]=c[1]
obiekt[4,4]=d[1]
obiekt[5,4]=e[1]
obiekt[1,5]=a[1]
obiekt[2,5]=b[1]
obiekt[2,5]=c[1]
obiekt[2,5]=b[1]
obiekt[3,5]=c[1]
obiekt[4,5]=d[1]
obiekt[5,5]=e[1]
obiekt
for(i in 2:7){if(a[i]>obiekt[1,4]){obiekt[1,4]=a[i]};if(a[i]<obiekt[1,5]){obiekt[1,5]=a[i]};}
for(i in 2:12){if(b[i]>obiekt[2,4]){obiekt[2,4]=b[i]};if(b[i]<obiekt[2,5]){obiekt[2,5]=b[i]};}
for(i in 2:8){if(c[i]>obiekt[3,4]){obiekt[3,4]=c[i]};if(c[i]<obiekt[3,5]){obiekt[3,5]=c[i]};}
for(i in 2:8){if(d[i]>obiekt[4,4]){obiekt[4,4]=d[i]};if(d[i]<obiekt[4,5]){obiekt[4,5]=d[i]};}
for(i in 2:9){if(e[i]>obiekt[5,4]){obiekt[5,4]=e[i]};if(e[i]<obiekt[5,5]){obiekt[5,5]=e[i]};}
obiekt