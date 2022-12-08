main :: IO ()
main = interact $ show . (\[x, y] -> solve x y) . map read . words

solve :: Int -> Int -> Int
solve n k = f n (240 - k) 1
  where
    f n k a
      | (k < a * 5) || a > n = 0
      | otherwise = 1 + f n (k - 5 * a) (a + 1)