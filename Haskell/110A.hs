main :: IO ()
main = interact solve

solve :: String -> String
solve s = if count == 4 || count == 7 then "YES" else "NO"
  where 
    count = length $ filter (\x -> x == '7' || x == '4') s

-- main :: IO ()
-- main = interact $ solve .  read

-- count :: Int -> Int
-- count x 
--   | r == 4 || r == 7 = 1 + count q
--   | q == 0 = 0
--   | otherwise = count q
--   where 
--     (q, r) = x `divMod` 10

-- solve :: Int -> String
-- solve x = if count' == 4 || count' == 7 then "YES" else "NO"
--   where 
--     count' = count x