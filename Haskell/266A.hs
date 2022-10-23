import Data.List (group)

main :: IO ()
main = interact $ show . solve . head . tail . words

solve :: String -> Int
solve = sum . map (pred .length) . group