{-# LANGUAGE LambdaCase #-}

main :: IO ()
main = interact $ unlines . map (f . solve . read) . tail . words

f :: Maybe [Int] -> String
f = \case
  Just xs -> "YES\n" <> unwords (map show xs)
  Nothing -> "NO"

solve :: Int -> Maybe [Int]
solve n
  | n `mod` 4 /= 0 =  Nothing
  | otherwise = Just $ [2, 4..n] <> [1, 3.. n - 2] <> [(n - 1) + n `div` 2]
