main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve [k, n, w] = if diff < 0 then 0 else diff
  where 
    totalCost k 0 = 0
    totalCost k w = k * w + totalCost k (w - 1)
    
    diff = totalCost k w - n