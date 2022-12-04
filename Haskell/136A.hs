import Data.List

main :: IO ()
main = interact $ unwords . map show . solve . map read . tail . words

solve :: [Int] -> [Int]
solve = map snd . sort . flip zip [1..] 