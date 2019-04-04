A=matrix(0,10,1)
for(i in 1:10){A[i,1]=(i*i)-10}
A
B=matrix(0,10,1)
for(i in 1:10){B[i,1]=sqrt((i*10)-2)}
B
C=matrix(0,10,1)
for(i in 1:10){C[i,1]=max(A[i,1],B[i,1])}
C
sumaAC=0
sumaBC=0
for(i in 1:10){for(j in 1:10){if(A[i,1]==C[j,1]){sumaAC=sumaAC+A[i,1]}}}
sumaAC
for(i in 1:10){for(j in 1:10){if(B[i,1]==C[j,1]){sumaBC=sumaBC+B[i,1]}}}
sumaBC