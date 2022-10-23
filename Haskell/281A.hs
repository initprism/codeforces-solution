import Data.Char (toUpper)

main :: IO ()
main = getLine >>= putStrLn . (\(x:xs) -> toUpper x : xs)