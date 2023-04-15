WARN = -Wall -Wextra -Wconversion -Wvla

default: c

cc:
	$(CXX) $(WARN) main.cc -o lupgen

gen: cc
	./lupgen

c: gen
	$(CC) $(WARN) test1.c -o test1
	$(CC) $(WARN) test2.c -o test2

len: gen
	$(CXX) $(WARN) len.cc -o len

dlen:
	$(CXX) $(WARN) len.cc -o len

