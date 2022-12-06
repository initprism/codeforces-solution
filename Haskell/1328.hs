import Control.Monad

main :: IO ()
main = getLine >>= (\t -> putStr . unlines . map ((\[x, y] -> show $ f x y) . map read . words) =<< replicateM t getLine) . read
  where f x y = if x `mod` y == 0 then 0 else (y - x `mod` y) `mod` y