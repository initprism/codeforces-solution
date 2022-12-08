main :: IO ()
main = interact $ (\[n, m] -> solve n m) . map read . words

solve :: Int -> Int -> String
solve n m = unlines . take n $ cycle [p, r, p, l] 
  where p = replicate m '#'
        r = replicate (m-1) '.' <> "#"
        l = "#" <> replicate (m-1) '.'