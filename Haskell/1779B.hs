import Control.Monad

main :: IO ()
main = interact $ unlines . map (solve . read) . tail . words

solve :: Int -> String
solve x 
  | x == 3 = "NO"
  | even x = "YES" <> "\n" <> unwords (take x $ cycle ["-1", "1"])
  | otherwise = "YES" <> "\n" <> unwords (take x $ cycle [dx, dx']) 
    where 
      dx  = show $ (x `div` 2) - 1
      dx' = show $ negate $ x `div` 2