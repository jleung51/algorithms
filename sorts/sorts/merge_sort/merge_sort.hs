-- This Haskell program contains the implementation of a merge sort algorithm.

-- This function sorts an array from least to greatest using the
-- merge sort algorithm.
merge_sort :: (Ord a) => [a] -> [a]
merge_sort [] = []
merge_sort [x] = [x] 
merge_sort list = merge (merge_sort $ fst $ halve list)
                        (merge_sort $ snd $ halve list)
  where
    -- This function splits a list into two halves.
    halve :: [a] -> ([a], [a])
    halve l = splitAt (div (length list) 2) l
    -- This function merges two lists into one list in ascending order,
    -- assuming the original lists are in increasing order.
    merge :: (Ord a) => [a] -> [a] -> [a]
    merge l1 l2
      | l1 == []          = l2
      | l2 == []          = l1
      | head l1 < head l2 = [head l1] ++ merge (tail l1) l2
      | otherwise         = [head l2] ++ merge l1 (tail l2)
