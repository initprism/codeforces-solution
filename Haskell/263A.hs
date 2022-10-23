main :: IO ()
main = interact $ show . solve  g . map read . words

solve :: [Int] -> [Int] -> Int
solve (x:xs) (0: ys) = solve xs ys
solve (x:_)_ = x

g :: [Int]
g = map (\x -> abs (x `div` 5 - 2) + abs (x `mod` 5 - 2) ) [0..]