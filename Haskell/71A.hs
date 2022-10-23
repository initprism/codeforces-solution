
main :: IO ()
main = interact $ unwords . map solve . tail . words

solve :: String -> String
solve s
  | length s > 10 = abbr
  | otherwise = s
  where
    abbr = head s : show (length s - 2) ++ last s : []