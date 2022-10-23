main :: IO ()
main = interact $ show . solve . read

solve :: Int -> Int
solve x = x' + if y' /= 0 then 1 else 0
  where 
    (x', y') = x `divMod` 5