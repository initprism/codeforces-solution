import Control.Monad

main :: IO ()
main = getLine >>= (\n -> print . sum . map (fromEnum . (\[p, q] -> q - p >= 2) . map read . words) =<< replicateM n getLine) . read