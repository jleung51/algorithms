# Source files
SOURCES  = ../selection_sort/selection_sort.c \
           ../insertion_sort/insertion_sort.c \
           ../quick_sort/quick_sort.c \
           ../merge_sort/merge_sort.c \
           test.c

# Header files
HSOURCES  = ../selection_sort/selection_sort.h \
            ../insertion_sort/insertion_sort.h \
            ../quick_sort/quick_sort.h \
            ../merge_sort/merge_sort.h \
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
