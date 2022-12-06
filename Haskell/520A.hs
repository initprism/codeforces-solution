import Data.Char

main :: IO ()
main = interact $ solve . map toLower . tail

solve :: String -> String
solve s = if filter (`elem` s) az == az then "YES" else "NO"
  where az = ['a'..'z']