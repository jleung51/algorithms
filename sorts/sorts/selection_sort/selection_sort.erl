% This Erlang module sorts a list of values using the selection sort algorithm.

-module(selection_sort).
-export([
	clear/0,
	selection_sort/1
]).

% This function clears the interpreter screen.
clear() -> io:format(os:cmd(clear)).

% This function returns the minimum value of a given list, assuming the first
% argument is one of the elements in the array.
min_inner(M, []) -> M;
min_inner(M, [X|Xs]) ->
	case X < M of
		true  -> min_inner(X, Xs);
		false -> min_inner(M, Xs)
	end.

% This function returns the minimum value of a given list.
min([X|Xs]) -> min_inner(X, Xs).

% This function removes the given value from the list.
remove(_, []) -> [];
remove(V, [X|Xs]) ->
	case X == V of
		true  -> Xs;
		false -> [X] ++ remove(V, Xs)
	end.

% This function uses the selection sort algorithm to sort a list in
% ascending order.
selection_sort([]) -> [];
selection_sort([L]) -> [L];
selection_sort(L) ->
	M = min(L),
	[M] ++ selection_sort(remove(M, L)).