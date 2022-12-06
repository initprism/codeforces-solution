import Control.Monad
import Data.List

main :: IO ()
main = getLine >>= (\n ->
    putStrLn . (\m -> if n == m  then "I become the guy." else "Oh, my keyboard!") . length . nub . concatMap (map (read :: String -> Int) . tail . words) =<< replicateM 2 getLine ) . read