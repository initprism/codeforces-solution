import Data.Array
import Data.Int
import Data.Maybe
import Data.Functor
import qualified Data.ByteString as B
import qualified Data.ByteString.Char8 as B8

type ArrII64 = Array Int64 Int64

main :: IO ()
main = do
  [n, m, k] <- cin
  [x, s]    <- cin
  as        <- listArray (0, m -1) <$> cin
  bs        <- listArray (0, m -1) <$> cin
  cs        <- listArray (0, k -1) <$> cin
  ds        <- listArray (0, k -1) <$> cin
  print $ solve n m k x s as bs cs ds
  where
    cin = B.getLine <&> map (fromIntegral . fst . fromJust . B8.readInteger) . B8.words :: IO [Int64]

solve :: Int64 -> Int64 -> Int64 -> Int64 -> Int64 -> ArrII64 -> ArrII64 -> ArrII64 -> ArrII64 -> Int64
solve n m k x s as bs cs ds = min sp2 sp1
  where
    sp2 = let   imm = upperbound ds k s - 1
          in if imm < 0 then x * n else x * (n - cs ! imm)
    sp1 = minimum $ map (f as bs cs ds n k s) [0..m - 1]

f :: ArrII64 -> ArrII64 -> ArrII64 -> ArrII64 -> Int64 -> Int64 -> Int64 -> Int64 -> Int64
f as bs cs ds n k s i
  | bs ! i <= s = (n - imm) * (as ! i)
  | otherwise    = maxBound :: Int64
  where imm = let   imm = upperbound ds k (s - bs ! i) - 1
              in if imm < 0 then 0 else cs ! imm

upperbound :: ArrII64 -> Int64 -> Int64 -> Int64
upperbound xs n t = go 0 n
  where go lb ub
          | lb >= ub = ub
          | xs ! mid <= t = go (mid + 1) ub
          | xs ! mid >  t = go lb mid
          | otherwise = error "???"
          where mid  = (lb + ub) `div` 2