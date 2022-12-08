main :: IO ()
main = interact $ show . solve . map read . tail . words

solve :: [Int] -> Int
solve (x:xs) = f xs x x 0
  where 
    f [] _ _ acc = acc
    f (x:xs) mx mn acc
      | x > mx    = f xs x mn (acc+1)
      | x < mn    = f xs mx x (acc+1)
      | otherwise = f xs mx mn acc