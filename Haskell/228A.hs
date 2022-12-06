import Data.List

main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve = flip subtract 4 . length . nub