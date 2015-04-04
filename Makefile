# Source files
SOURCES  = selection_sort/selection_sort.c quick_sort/quick_sort.c test.c

# Header files
HSOURCES = selection_sort/selection_sort.h quick_sort/quick_sort.h test.h

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

# $ make clean
# Removes created files
clean:
	rm -f out *.o
