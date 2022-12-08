main :: IO ()
main = interact $ show . solve . map read . tail . words

solve :: [Int] -> Int
solve = abs . minimum . scanl (+) 0