main :: IO ()
main = interact $ show . solve . map read . words

solve :: [Int] -> Int
solve xs@[x,y,z] = sum . map (\x -> abs(x - m)) $ xs
  where m = max (min x y) (min (max x y) z)