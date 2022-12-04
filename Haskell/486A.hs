main :: IO ()
main = interact $ show . solve . read 

solve :: Int -> Int
solve x = x `div` 2 - x `mod` 2 * x