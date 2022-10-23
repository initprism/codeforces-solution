main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve [n, k]
  | k == 0 = n
  | lastDigit == 0 = solve [n `div` 10, k - 1]
  | otherwise = solve [n - 1 , k - 1]
  where 
    lastDigit = n `mod` 10