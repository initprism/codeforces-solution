main :: IO ()
main = interact $ (\x -> if x then "YES" else "NO") . solve . lines

solve :: [String] -> Bool
solve [s1, s2] = reverse s1 == s2