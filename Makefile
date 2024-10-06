all:
	# g++ interview.cpp
	# g++ practicum-3.cpp
	g++ main.cpp -std=c++20
	./a.out

test:
	g++ test.cpp -std=c++20
	./a.out

clean:
	rm a.out
