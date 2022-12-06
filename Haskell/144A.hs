import Data.List

main :: IO ()
main = interact $ show . solve . map read . tail . words

solve :: [Int] -> Int
solve xs = maxI + length xs - 1 - minI - fromEnum (maxI > minI)
    where 
          maxV = maximum xs
          minV = minimum xs
          maxI = head $ elemIndices maxV xs
          minI = last $ elemIndices minV xs