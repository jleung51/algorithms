# Source files
SOURCES  = ../bogosort/bogosort.c \
           ../bubble_sort/bubble_sort.c \
           ../insertion_sort/insertion_sort.c \
           ../merge_sort/merge_sort.c \
           ../quick_sort/quick_sort.c \
           ../selection_sort/selection_sort.c \
           ../shell_sort/shell_sort.c \
           test.c

# Header files
HSOURCES = ../bogosort/bogosort.h \
           ../bubble_sort/bubble_sort.h \
           ../insertion_sort/insertion_sort.h \
           ../merge_sort/merge_sort.h \
           ../quick_sort/quick_sort.h \
           ../selection_sort/selection_sort.h \
           ../shell_sort/shell_sort.h \
           test.h


# Compiler options
CFLAGS = -std=c11 -g -lm -Wall

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
	#   To test int_array.h, run: make output
	#   To remove compiled output files, run: make clean

# $ make
output: $(SOURCES) $(HSOURCES)
	gcc $(CFLAGS) $(SOURCES) -o output
	# To execute the program, run: ./output

# $ make clean
# Removes created files
clean:
	rm -f output *.o
