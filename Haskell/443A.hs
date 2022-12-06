import Data.List

main :: IO ()
main = interact $ show . length . nub . filter (\x -> x `elem` ['a'..'z'])