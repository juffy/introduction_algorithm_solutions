practice1 : practice1.o matrix_chain_order.o
	g++ -o practice1 practice1.o matrix_chain_order.o

practice1.o : practice1.cc matrix_chain_order.hh
	g++ -c practice1.cc

matrix_chain_order.o : matrix_chain_order.cc matrix_chain_order.hh
	g++ -c matrix_chain_order.cc

practice2 : practice2.o lcseq.o
	g++ -o practice2 practice2.o lcseq.o

practice2.o : practice2.cc lcs.hh
	g++ -c practice2.cc

lcseq.o : lcseq.cc lcs.hh
	g++ -c lcseq.cc

practice3 : practice3.o max_sum.o
	g++ -o practice3 practice3.o max_sum.o

practice3.o : practice3.cc max_sum.hh
	g++ -c practice3.cc

max_sum.o : max_sum.cc max_sum.hh
	g++ -c max_sum.cc

clean :
	rm practice1 practice1.o matrix_chain_order.o \
	practice2 practice2.o lcseq.o \
	practice3 practice3.o max_sum.o






