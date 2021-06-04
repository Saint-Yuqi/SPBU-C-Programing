# -*- MakeFile -*-

#target:dependecies
#	action

all: geom tip

geom: geom.o gd.o
	gcc geom.o gd.o -o geom -l m 
geom.o: geom.c gd.h
	gcc -c geom.c
gd.o: gd.c
	gcc -c gd.c

tip: tip.o gd.o 
	gcc tip.o gd.o -o tips
tip.o: tip.c gd.h
	gcc -c tip.c

clean:
	rm *.o tip geom


