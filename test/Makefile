# Source files
SOURCES  = ../bogosort/bogosort.c \
           ../bubble_sort/bubble_sort.c \
           ../cocktail_sort/cocktail_sort.c \
           ../insertion_sort/insertion_sort.c \
           ../merge_sort/merge_sort.c \
           ../quick_sort/quick_sort.c \
           ../selection_sort/selection_sort.c \
           ../shell_sort/shell_sort.c \
           test.c

# Header files
HSOURCES = ../bogosort/bogosort.h \
           ../bubble_sort/bubble_sort.h \
           ../cocktail_sort/cocktail_sort.h \
           ../insertion_sort/insertion_sort.h \
           ../merge_sort/merge_sort.h \
           ../quick_sort/quick_sort.h \
           ../selection_sort/selection_sort.h \
           ../shell_sort/shell_sort.h \
           test.h


# Compiler options
CFLAGS = -std=c11 -g -Wall

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
	#   To test the sorts, run: make output
	#   To remove compiled output files, run: make clean

# $ make
output: $(SOURCES) $(HSOURCES)
	gcc $(CFLAGS) $(SOURCES) -o output -lm
	# To execute the program, run: ./output

# $ make clean
# Removes created files
clean:
	rm -f output *.o
