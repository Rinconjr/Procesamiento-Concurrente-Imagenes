all:	imgconc

imgconc:	imgconc.o
	gcc	-o	imgconc	imgconc.o

imgconc.o:	imgconc.c
	gcc	-c	imgconc.c