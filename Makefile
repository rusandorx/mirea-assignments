all:
	# g++ interview.cpp
	# g++ practicum-3.cpp
	g++ main.cpp
	./a.out

test:
	g++ test.cpp
	./a.out

clean:
	rm a.out
