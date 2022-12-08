import Data.Char

main :: IO ()
main = interact $ show . solve . tail . words

solve :: [String] -> Int
solve = foldr (\x -> (+) (g !! (ord (head x) `mod` 7))) 0
  where g = [4, 0, 8, 20, 6, 12]