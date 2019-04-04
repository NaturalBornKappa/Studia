wek=0
for(i in 1:100){wek[i]=i}
wek
liczka=0
for(i in 1:100){if(i<10){liczka[i]=wek[i]};if(i>=10 && i<100){liczka[i]=wek[i]%%10};if(i>=100){liczka[i]=wek[i]%%100}}
p=factor(liczka)
p=factor(liczka)
p
summary(p)