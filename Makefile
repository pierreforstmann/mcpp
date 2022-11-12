#
# Makefile
#
hello:	hello.cpp
	g++ hello.cpp -o hello

clean: 
	rm hello
