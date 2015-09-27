# Source files
SOURCES  = ../linear_search/linear_search.c \
           ../binary_search/binary_search.c \
           test.c

# Header files
HSOURCES = ../linear_search/linear_search.h \
           ../binary_search/binary_search.h \
           test.h

# Compiler options
CFLAGS = -std=c99 -g -lm -Wall

#####
###
#
# 'Make' commands
#
###
#####

# $ make
out: $(SOURCES) $(HSOURCES)
	gcc $(CFLAGS) $(SOURCES) -o out
	# To execute the program, run: ./out

# $ make <custom>
#<custom>: <source_files>
#	<command>

# $ make clean
# Removes created files
clean:
	rm -f out *.o *~
