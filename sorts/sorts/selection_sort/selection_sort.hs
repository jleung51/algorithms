-- This Haskell program contains the implementation of a selection sort
-- algorithm.

-- This function sorts an array from least to greatest using the
-- selection sort algorithm.
-- This implementation is tail-recursive.
selection_sort :: (Ord a) => [a] -> [a]
selection_sort [] = []
selection_sort list = selection_sort_inner [] list
  where
    -- This function uses an accumulator to implement the selection sort
    -- algorithm.
    selection_sort_inner :: (Ord a) => [a] -> [a] -> [a]
    selection_sort_inner accum [] = accum
    selection_sort_inner accum l = selection_sort_inner
        (accum ++ [minimum l])
        (remove (minimum l) l)
      where
        -- This function removes a single element from a list.
        -- If the list does not contain the element, the list is unchanged.
        remove :: (Eq a) => a -> [a] -> [a]
        remove el [] = []
        remove el l_remove
          | el == (head l_remove) = tail l_remove
          | otherwise             = [head l_remove] ++ remove el (tail l_remove)
