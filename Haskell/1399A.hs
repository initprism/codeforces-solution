import Data.List
import Data.Bool
import Control.Monad

main :: IO ()
main = getLine >>= (\t -> putStr . unlines . map (bool "NO" "YES" . solve . map read . words) =<< replicateM t (getLine >> getLine)) . read

solve :: [Int] -> Bool
solve xs = all (<= 1) $ zipWith subtract <*> tail $ sort xs