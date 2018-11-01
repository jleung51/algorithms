-- This Haskell program contains the implementation of a Stalin sort
-- algorithm.
-- Reference: https://mastodon.social/@mathew/100958177234287431

-- This function "sorts" an array from least to greatest using the
-- Stalin sort algorithm. Any elements which are not originally in sorted
-- order are removed.
-- This implementation is tail-recursive.
stalin_sort :: (Ord a) => [a] -> [a]
stalin_sort [] = []
stalin_sort list = stalin_sort_inner [] (head list) list
  where
    -- This function uses an accumulator to implement the Stalin sort
    -- algorithm.
    stalin_sort_inner :: (Ord a) => [a] -> a -> [a] -> [a]
    stalin_sort_inner accum comp [] = accum
    stalin_sort_inner accum comp (x:xs)
      | comp > x       = stalin_sort_inner accum comp xs
      | otherwise      = stalin_sort_inner (accum ++ [x]) x xs
