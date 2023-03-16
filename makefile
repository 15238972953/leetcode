CC:=g++
SRCS:=$(wildcard *.cpp)
TARGETS:=$(SRCS:%.cpp=%)
all:$(TARGETS)
%:%.cpp
	$(CC) -g $< -o $@

clean:
	rm -rf $(TARGETS)
