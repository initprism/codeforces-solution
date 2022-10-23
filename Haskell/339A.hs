import Data.List (sort, intersperse)

main :: IO()
main = getLine >>= putStrLn . intersperse '+' . sort . filter (/= '+')