import Data.List

main :: IO ()
main = interact $ solve . read

solve :: Int -> String
solve n = intercalate " that " (take n $ cycle ["I hate", "I love"]) <> " it"