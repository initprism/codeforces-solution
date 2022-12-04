import Data.List

main :: IO ()
main = interact $ map (\[x,y] -> if x == y then '0' else '1') . transpose . words