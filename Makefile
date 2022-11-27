#
# Makefile
#
all:	hello vat vat2 cao tf tc par c fs m pai ct ctn lav l a lambda ms

hello:	hello.cpp
	g++ hello.cpp -Wall -o hello

vat:	vat.cpp
	g++ vat.cpp -Wall -o vat 

vat2:	vat2.cpp
	g++ vat2.cpp -Wall -o vat2 

cao:	cao.cpp Person.cpp Person.h Tweeter.cpp Tweeter.h status.h Resource.h
	g++ cao.cpp Person.cpp Tweeter.cpp Resource.cpp -Wall -o cao 

tf:	tf.cpp Person.cpp Person.h Resource.h
	g++ tf.cpp Person.cpp Resource.cpp -Wall -o tf

tc:	tc.cpp Person.cpp Person.h Resource.h
	g++ tc.cpp Person.cpp Resource.cpp -Wall -o tc

par:	par.cpp Person.cpp Person.h Resource.h
	g++ par.cpp Person.cpp Resource.cpp -Wall -o par 

c:	c.cpp Person.cpp Person.h Resource.h 
	g++ c.cpp Person.cpp Resource.cpp -Wall -o c

fs:	fs.cpp Resource.cpp Resource.h Person.cpp Person.h
	g++ fs.cpp Resource.cpp Person.cpp -Wall -o fs

m:	m.cpp Resource.cpp Resource.h Person.cpp Person.h
	g++ m.cpp Resource.cpp Person.cpp -Wall -o m 

pai:	pai.cpp Person.cpp Person.h Tweeter.cpp Tweeter.h Resource.cpp Resource.h
	g++ pai.cpp Person.cpp Tweeter.cpp Resource.cpp -Wall -o pai 

ct:	ct.cpp Person.cpp Person.h Tweeter.cpp Tweeter.h Resource.cpp Resource.h
	g++ ct.cpp Person.cpp Tweeter.cpp Resource.cpp -Wall -o ct 

ctn:	ctn.cpp  Resource.cpp Resource.h
	g++ ctn.cpp Resource.cpp -Wall -o ctn 

lav:	lav.cpp  
	g++ lav.cpp -Wall -o lav 

l:	l.cpp Resource.h Resource.cpp 
	g++ l.cpp Resource.cpp -Wall -o l 

a:	a.cpp  
	g++ a.cpp -Wall -o a 

ms:	ms.cpp Resource.h Resource.cpp
	g++ ms.cpp Resource.cpp -Wall -o ms 

lambda:	lambda.cpp  
	g++ lambda.cpp -Wall -o lambda 
clean: 
	rm -f *.o hello vat vat2 cao tf tc par c fs m pai ct ctn lav l a lambda ms
