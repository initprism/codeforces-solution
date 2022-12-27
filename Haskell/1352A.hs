main :: IO ()
main = interact $ unlines . concatMap (map show . (\x-> length x : x) . solve . read) . tail . words

solve :: Int -> [Int]
solve = filter (/= 0) . zipWith (*) ll . f
  where 
    ll = 1: map (10*) ll

f :: Int -> [Int]
f 0 = []
f x =  r: f q
  where 
    (q, r) = x `divMod` 10