# Source files
SOURCES = test.cpp \

# Header files
HSOURCES = ../merge_sort.hpp \

# Compiler options
CFLAGS = -std=c++14 -g -Wall

#####
###
#
# 'Make' commands
#
###
#####

# $ 'make' or 'make help'
help:
	# INSTRUCTIONS:
	#   To test the sorting algorithms, run: make output
	#   To remove compiled output files, run: make clean

# $ make output
output: $(SOURCES) $(HSOURCES)
	g++ $(CFLAGS) $(SOURCES) -o output
	# To execute the program, run: ./output

# $ make clean
# Removes created files
clean:
	rm -f output *.o *~
