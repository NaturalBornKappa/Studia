wek=c(1,30,0,1,25,7,9,15,5,8,3,10,1,0,30,1)
A=matrix(wek,4,4)
A
for(i in 1:4){for(j in 1:4){if(A[i,j]>1){if(A[i,j]%%5==0){A[i,j]=5} else {A[i,j]=0}}}}
A
