{-# LANGUAGE BangPatterns #-}

import Data.List
import Data.Bits

main :: IO ()
main = interact $ show . solve . map read . tail. words

solve :: [Int] -> Int
solve = sum . map ((\l -> (l * (l -1)) `shiftR` 1) . length) . group . sort . scanl' (\(!b, !o) a -> (xor a b, not o)) (0, False)