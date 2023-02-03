main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve [k2, k3, k5, k6] = a * 256 + b * 32
  where 
    a = minimum [k2, k5, k6]
    b = minimum [k2 - a, k3]