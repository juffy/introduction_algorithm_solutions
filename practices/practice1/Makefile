practice1 : practice1.o
	g++ -o practice1 practice1.o

practice1.o : practice1.cc ../template_utils.cc ../utils.hh
	g++ -c practice1.cc

practice2 : practice2.o priority_queue.o
	g++ -o practice2 practice2.o priority_queue.o

practice2.o : practice2.cc priority_queue.hh
	g++ -c practice2.cc

priority_queue.o : priority_queue.cc priority_queue.hh
	g++ -c priority_queue.cc

practice3 : practice3.o
	g++ -o practice3 practice3.o

practice3.o : practice3.cc ../template_utils.cc ../utils.hh
	g++ -c practice3.cc

practice4 : practice4.o
	g++ -o practice4 practice4.o

practice4.o : practice4.cc ../template_utils.cc ../utils.hh
	g++ -c practice4.cc

clean :
	rm practice1 practice2 practice1.o practice2.o priority_queue.o\
		practice3 practice3.o practice4 practice4.o

test_practice4 : practice4
	./practice4 < input
	./practice4 < input2
	./practice4 < input3
	./practice4 < input4
	./practice4 < input5
	./practice4 < input6
	./practice4 < input7
	./practice4 < input8
	./practice4 < input9
	./practice4 < input10
