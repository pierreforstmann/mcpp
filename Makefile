#
# Makefile
#
all:	hello vat 

hello:	hello.cpp
	g++ hello.cpp -Wall -o hello

vat:	vat.cpp
	g++ vat.cpp -Wall -o vat 

clean: 
	rm -f *.o hello vat
