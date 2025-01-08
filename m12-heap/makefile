CXX=g++
CXXFLAGS=-std=c++14 -Wall
LFLAGS=
TARGETS=test-pq test-heapsort
HEADERS=$(wildcard *.hpp)
SRC=$(wildcard *.cpp)
OBJS=$(SRC:%.cpp=%.o)
RM=rm -rf

all: $(TARGETS)

test-pq: test-pq.o
	$(CXX) $(LFLAGS) -o $@ $^
	./$@

test-heapsort: test-heapsort.o
	$(CXX) $(LFLAGS) -o $@ $^
	./$@

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(TARGETS) $(OBJS)
