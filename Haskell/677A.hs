main :: IO ()
main = interact $ show . solve . map read . tail . words

solve :: [Int] -> Int
solve (h:xs) = sum [if x <= h then 1 else 2 | x <- xs]