main :: IO ()
main = interact $ show . solve . map read . tail . words

solve :: [Int] -> Int
solve xs = sum xs + minimum (map f xs)
  where 
    me  = minimum xs
    f a = minimum [me * i + a `div` i - a - me | i <- [1..a], a `mod` i == 0]
