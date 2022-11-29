main :: IO ()
main = do
  [n, t] <- fmap (map read . words) getLine
  s      <- getLine
  putStrLn $ iterate solve s !! t


-- 0. BGGBG
-----------------------------------
-- 1.1 "GB" <> solve "GBG"
-- 1.2 "GB" <> ('G': solve "BG") 
-- 1.3 "GB" <> ('G': ("GB" <> [])) 
-- 1.4 "GBGGB"
-----------------------------------
-- 2.1 'G': (solve "BGGB") 
-- 2.2 'G': ("GB" <> solve "GB") 
-- 2.3 'G': ("GB" <> ('G' : solve "B")) 
-- 2.4 'G': ("GB" <> ('G' : "B")) 
-- 2.4 GGBGB
solve ::  String -> String
solve ('B':'G':xs) = "GB" <> solve xs
solve (x:xs)       = x:solve xs
solve xs           = xs