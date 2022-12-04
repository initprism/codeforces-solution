main :: IO ()
main = interact $ show . solve . map read . tail . words

solve :: [Double] -> Double
solve x = sum x / fromIntegral (length x)