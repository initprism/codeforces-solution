main :: IO ()
main = interact $ (\(x, y) -> show x ++ " " ++ show y) . solve . read

solve :: Int -> (Int, Int)
solve x
  | odd x     = (9, x - 9)
  | otherwise = (4, x - 4)
