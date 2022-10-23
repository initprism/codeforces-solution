main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int 
solve (m:n:_) = (m * n) `div` 2