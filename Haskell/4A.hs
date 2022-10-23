main :: IO ()
main = interact $ solve . read

solve :: Int -> String
solve x
  | x > 2 && even x = "YES"
  | otherwise = "NO"