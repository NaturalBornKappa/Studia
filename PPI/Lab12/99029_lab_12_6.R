data(trees)
attach(trees)
# podpunkt a
barplot(Volume, main="Wykres s³upkowy dla zmiennej 'Volume'", horiz=T, col="blue")
# podpunkt b
hist(Height, 6,prob=T, main="Histogram i funkcja gêstoœci", xlab="Wysokoœæ",ylab="Prawdopodobieñstwo",col="red")
lines(density(Height))
# podpunkt c
boxplot(Girth, Height, Volume, border="darkred", horizontal=T, names=c("Girth", "Height", "Volume"), col=c("bisque", "peachpuff3", "peru"))
# podpunkt d
boxplot2(Girth, Height, Volume, border="blue1", names=c("Girth", "Height", "Volume"), col=c("gray3", "gray33", "gray63"), main="Trees", top=TRUE, shrink=0.8 )
# podpunkt e
model <- lm(Volume~Height)
summary(model)
plot(Height,Volume)
abline(model, col="red")
legend(65, 60, c("(Height,Volume)"), pch=21)
legend(65, 70, c("Volume=-87.1236+1.5433Height"), lty=1, col="red")
# podpunkt f
model <- lm(Volume ~ Girth + Height)
summary(model)
qqnorm(model$residuals)
# podpunkt g
plot(model)
# podpunkt h
par(mfrow=c(1,2))
plot(Girth, Height, col="green3")
plot(Girth, Height, type="n")
points(Girth, Height, pch=21, bg="gray50", col="blue", cex=1.5)
abline(h=seq(65, 85,by=5), v=seq(8,20, by=2), lty=3)
# podpunkt i
pairs(trees, labels=c("Obwód", "Wysokoœæ", "Objêtoœæ"), col="blue", cex.labels=1.5, pch=4)

