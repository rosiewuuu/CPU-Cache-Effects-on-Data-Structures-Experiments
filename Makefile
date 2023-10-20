all: Exp1 Exp3 

Exp1: Exp1.o  
	g++ -Wall -o Exp1 Exp1.o  

Exp3: Exp3.o ulliststr.o
	g++ -Wall -o Exp3 Exp3.o ulliststr.o

Exp1.o: Exp1.cpp 
	g++ -Wall -o Exp1.o -c Exp1.cpp 

Exp3.o: Exp3.cpp List.h ULListStr.h
	g++ -Wall -o Exp3.o -c Exp3.cpp 

ulliststr.o: ulliststr.cpp ULListStr.h
	g++ -Wall -o ulliststr.o -c ulliststr.cpp 

clean:
	rm -f Exp1 Exp3 ulliststr *.o
