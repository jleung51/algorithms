% This Erlang module sorts a list of values using the selection sort algorithm.

-module(test).
-export([
	start/0
]).

% This function is the main program for execution.
start() ->
	io:fwrite("Sorting []: ~w~n", [selection_sort:selection_sort([])]),
	io:fwrite("Sorting [4]: ~w~n", [selection_sort:selection_sort([4])]),
	io:fwrite(
		"Sorting [1, 9, 3, 2, 7, 6, 4, 8, 5]: ~w~n",
		[selection_sort:selection_sort([1, 9, 3, 2, 7, 6, 4, 8, 5])]),
	io:fwrite(
		"Sorting [6, 2, 4, 8, 9, 5, 3, 1, 7, 10]: ~w~n",
		[selection_sort:selection_sort([6, 2, 4, 8, 9, 5, 3, 1, 7, 10])]),
	io:fwrite(
		"Sorting \"The quick brown fox jumps over the lazy dog.\": ~s~n",
		[selection_sort:selection_sort(
			"The quick brown fox jumps over the lazy dog."
		)]).
