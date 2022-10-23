import Data.List (nub)

main :: IO ()
main = interact $ (\x -> if x then "CHAT WITH HER!" else "IGNORE HIM!") . odd . length . nub