main :: IO ()
main = interact $ show . (\[n, v] -> solve n v) . map read . words

solve :: Int -> Int -> Int
solve n v
  | (n - 1) <= v = n - 1
  | otherwise = v + sum (take (n - 1 - v) [2..])
