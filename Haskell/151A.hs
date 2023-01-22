main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve [n, k, l, c, d, p, nl, np] = minimum [c1, c2, c3] `div` n
  where
    c1 = k * l `div` nl
    c2 = c * d
    c3 = p `div` np