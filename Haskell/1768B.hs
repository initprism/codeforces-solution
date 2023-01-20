import Control.Monad

main :: IO ()
main = do
  _ <- getLine

  k <- last . map iread . words <$> getLine
  p <- map iread . words <$> getLine

  print $ solve k p

  where iread = read :: String -> Int

solve :: Int -> [Int] -> Int
solve k p = go k p 1 0
  where
    go k p i a
      | length p <= i = a
      | otherwise =
          if p !! (i - 1) == i then go k p (i + 1) a else go k p' (i + k) (a + 1)

      where p' = filter (\e -> e `notElem` take k [i..]) p <> take k [i..]