import Control.Monad

main :: IO ()
main = getLine >>= (\n -> putStr . unlines . map ((show . (\[x, y] -> f x y)) . map read . words) =<< replicateM n getLine ) . read
  where f a b = (\(x, y) -> x + fromEnum (nz y)) $ abs (a - b) `divMod` 10
        nz = (/= 0)