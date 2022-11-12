#
# Makefile
#
all:	hello vat vat2 cao

hello:	hello.cpp
	g++ hello.cpp -Wall -o hello

vat:	vat.cpp
	g++ vat.cpp -Wall -o vat 

vat2:	vat2.cpp
	g++ vat2.cpp -Wall -o vat2 

cao:	cao.cpp Person.cpp Person.h Tweeter.cpp Tweeter.h status.h
	g++ cao.cpp Person.cpp Tweeter.cpp -Wall -o cao 

clean: 
	rm -f *.o hello vat vat2 cao
