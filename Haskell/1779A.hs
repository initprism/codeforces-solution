import Data.List
import Control.Monad

main :: IO ()
main = getLine >>= (\t -> putStr . unlines . map (show . solve . snd) . m =<< replicateM (t * 2) getLine) . read
  where
    m :: [String] -> [(String, String)]
    m (x:y:xs)= (x, y) : m xs
    m _ = [] 

solve :: String -> Int
solve s
  | "RL" `isInfixOf` s = 0
  | otherwise = case f "LR" s of
      Just n  -> n + 1
      Nothing -> -1
  where
    f search str = findIndex (isPrefixOf search) (tails str)