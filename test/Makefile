# Source files
SOURCES  = ../bogosort/bogosort.c \
           ../insertion_sort/insertion_sort.c \
           ../merge_sort/merge_sort.c \
           ../quick_sort/quick_sort.c \
           ../selection_sort/selection_sort.c \
           ../shell_sort/shell_sort.c \
           test.c

# Header files
HSOURCES = ../bogosort/bogosort.h \
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

# $ make
out: $(SOURCES) $(HSOURCES)
	gcc $(CFLAGS) $(SOURCES) -o out
	# To execute the program, run: ./out

# $ make clean
# Removes created files
clean:
	rm -f out *.o
