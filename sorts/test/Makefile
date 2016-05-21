# Source files
SOURCES  = ../sorts/bogosort/bogosort.c \
           ../sorts/bubble_sort/bubble_sort.c \
           ../sorts/cocktail_sort/cocktail_sort.c \
           ../sorts/insertion_sort/insertion_sort.c \
           ../sorts/merge_sort/merge_sort.c \
           ../sorts/pickupstick_sort/pickupstick_sort.c \
           ../sorts/quick_sort/quick_sort.c \
           ../sorts/selection_sort/selection_sort.c \
           ../sorts/shell_sort/shell_sort.c \
           test.c

# Header files
HSOURCES = ../sorts/bogosort/bogosort.h \
           ../sorts/bubble_sort/bubble_sort.h \
           ../sorts/cocktail_sort/cocktail_sort.h \
           ../sorts/insertion_sort/insertion_sort.h \
           ../sorts/merge_sort/merge_sort.h \
           ../sorts/pickupstick_sort/pickupstick_sort.h \
           ../sorts/quick_sort/quick_sort.h \
           ../sorts/selection_sort/selection_sort.h \
           ../sorts/shell_sort/shell_sort.h \
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
