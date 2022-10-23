import Data.Char (toUpper, toLower, isUpper)

main :: IO ()
main = getLine >>= putStrLn . solve  

solve :: String -> String
solve s = case compare u l of
  EQ -> map toLower s
  LT -> map toLower s
  GT -> map toUpper s
  where
    (u, l) = foldl (\ (u, l) s -> if isUpper s then (u + 1 , l) else (u, l + 1) ) (0, 0) s