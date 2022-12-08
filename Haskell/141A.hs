import Data.List

main :: IO ()
main = interact $ (\x -> if x then "YES" else "NO") . solve . words

solve :: [String] -> Bool
solve [a,b,c] = sort (a <> b) == sort c