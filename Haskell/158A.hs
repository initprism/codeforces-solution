main :: IO()
main = interact $ show . solve . map read . tail . words 

solve :: [Int] -> Int
solve []     = 0
solve (k:xs) =  sum [1 | x <- xs, x > 0 && x >= xs !! (k - 1)]