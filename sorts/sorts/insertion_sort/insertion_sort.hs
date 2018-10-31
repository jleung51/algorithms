-- This Haskell program contains the implementation of an insertion sort
-- algorithm.

-- This function sorts an array from least to greatest using the
-- insertion sort algorithm.
-- This implementation is tail-recursive.
insertion_sort :: (Ord a) => [a] -> [a]
insertion_sort [] = []
insertion_sort list = insertion_sort_inner [] list
  where
    -- This function uses an accumulator to implement the insertion sort
    -- algorithm.
    insertion_sort_inner :: (Ord a) => [a] -> [a] -> [a]
    insertion_sort_inner accum [] = accum
    insertion_sort_inner accum l = insertion_sort_inner
        (insert (head l) accum)
        (tail l)
      where
        -- This function inserts an element into the first position in the list
        -- where it is greater than all the elements before it.
        insert :: (Ord a) => a -> [a] -> [a]
        insert el [] = [el]
        insert el l_insert
          | el < head l_insert = [el] ++ l_insert
          | otherwise          = [head l_insert] ++ insert el (tail l_insert)
