import Data.List

main :: IO ()
main = interact $ show . solve . succ . read

solve :: Int -> Int
solve = head . filter ((==4) . length . nub . show) . iterate succ

-- list comprehension
-- solve :: Int -> Int
-- solve x = head [ y | y <-[x+1..], (length . nub . show $ y) == 4]