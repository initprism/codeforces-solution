main :: IO ()
main = interact $ show . (\[x, y] -> solve x y) . map read . words

solve :: Int -> Int -> Int
solve k r = head . filter (c r . (* k)) $ [1..]
  where 
      c x = (`elem` [0, r]) . (`mod` 10)