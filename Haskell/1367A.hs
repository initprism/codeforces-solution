main :: IO ()
main = interact $ unlines . map solve . tail . words

solve :: String -> String
solve (x:y:xs) = x:y: f xs
  where
    f []       = []
    f (_:y:[]) = y: []
    f (_:y:xs) = y: f xs
