main :: IO ()
main = interact $  (\[a, b] -> (\(a, b) -> show a <> " " <> show b) $ solve a b) . map read . words

solve :: Int -> Int -> (Int, Int)
solve a b = (p, q)
  where
      p = if a >= b then b else a
      q = (if a >= b then a - b else b - a) `div` 2
