practice1 : practice1.o utils.o
	g++ -o practice1 practice1.o utils.o

practice1.o : practice1.cc ../utils.hh
	g++ -c practice1.cc

utils.o : ../utils.cc ../utils.hh
	g++ -c ../utils.cc
