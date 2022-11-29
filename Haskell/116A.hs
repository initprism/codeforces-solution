-- oneline version
-- main = interact$show.maximum.scanl1 (+).map (negate.foldl1 (-).map read.words).tail.lines

main :: IO ()
main = interact $ show . solve . f . map read . tail . words

f :: [a] -> [(a, a)]
f [] = []
f (x:y:xs) = (x, y) : f xs 

solve :: [(Int, Int)] -> Int
solve x = maximum . scanl1 (+) $ map (\(x, y) -> negate $ x - y) x