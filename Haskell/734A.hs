import Data.Char (isSpace, isAlpha)

main :: IO ()
main = interact $ solve . dropWhile isSpace . reverse . dropWhile (not . isAlpha)

solve :: String -> String
solve x = case compare anton danik of
  LT -> "Danik"
  GT -> "Anton"
  EQ -> "Friendship"
  where
    anton = length $ filter (== 'A') x
    danik = length x - anton;