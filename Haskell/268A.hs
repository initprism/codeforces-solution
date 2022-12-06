import Data.List
import Control.Monad

main :: IO ()
main = getLine >>= (\n -> print . (\[h, g] -> sum  [1 | x <- h, y <- g, x + 0 == y]) . transpose . map (map read . words) =<< replicateM n getLine) . read