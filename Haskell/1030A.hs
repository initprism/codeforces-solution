main :: IO ()
main = interact $ (\x -> if x /= 0 then "HARD" else "EASY") . sum . map read . tail . words