% This Erlang module sorts a list of values using the merge sort algorithm.

-module(merge_sort).
-export([
	clear/0,
	merge_sort/1
]).

% This function clears the interpreter screen.
clear() -> io:format(os:cmd(clear)).

% This function merges two lists which are already sorted into a single
% resulting sorted list.
merge([], L) -> L;
merge(L, []) -> L;
merge([X|Xs], [Y|Ys]) ->
	case X < Y of
		true  -> [X] ++ merge(Xs, [Y]++Ys);
		false -> [Y] ++ merge([X]++Xs, Ys)
	end.

% This function returns the middle index of a given list.
list_half_index(L) -> trunc(length(L)/2).

% This function uses the merge sort algorithm to sort a list.
merge_sort([]) -> [];
merge_sort([X]) -> [X];
merge_sort(L) ->
	{L1, L2} = lists:split(list_half_index(L), L),
	merge(merge_sort(L1), merge_sort(L2)).