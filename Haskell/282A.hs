main :: IO ()
main = interact $ show . sum . map (\x -> if x !! 1 == '+' then 1 else -1) . tail . lines