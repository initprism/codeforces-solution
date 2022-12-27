import Data.List

main :: IO ()
main = interact $ unwords . map show . solve . map read . words

solve :: [Int] -> [Int]
solve xs = map (l -) vs
  where ys = sort xs
        vs = init ys
        l  = last ys