main :: IO ()
main = interact $ show . solve . read

solve :: Int -> Int
solve x = d100 + d20 + d10 + d5 + d1
  where 
    d100 = x `div` 100 
    d20  = x `div` 20 `mod` 5
    d10  = x `div` 10 `mod` 2
    d5   = x `div` 5  `mod` 2
    d1   = x `mod` 5