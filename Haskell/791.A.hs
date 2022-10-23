
main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve [a, b]
  | a > b     = 0
  | otherwise = 1 + solve [a * 3, b *2]