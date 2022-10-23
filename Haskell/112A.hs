import Data.Char (toUpper)

main :: IO()
main = interact $ show . solve . map (map toUpper) . words

solve :: [String] -> Int
solve (x:y:_) = case compare x y of
  EQ -> 0
  LT -> -1
  GT -> 1