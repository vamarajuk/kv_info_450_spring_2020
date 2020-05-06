
default: build
	
exam.o: 
	g++ -c Account.cpp Savings.cpp creditCard.cpp checking.cpp 
 

build:exam.o
	g++ -o exam main.cpp exam.o

clean: 
	rm -f exam.o exam
