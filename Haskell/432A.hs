main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve (n:t:xs) = length (filter (\x -> 5 - x >= t) xs)  `div` 3