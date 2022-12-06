main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve [k,l,m,n,d] = length [x | x <- [1..d], p x k || p x l || p x m || p x n ]
  where p x y = x `mod` y == 0