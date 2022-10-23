main :: IO()
main = interact $ show . length . filter (== True) . map (solve . (map read . words)) . tail . lines

solve :: [Int] -> Bool
solve x 
  | sum x >= 2 = True
  | otherwise  = False