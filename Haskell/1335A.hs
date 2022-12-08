-- 조건 `a > b` 에 의해 a의 값은 a / 2 보다 커야 한다.
-- 조건 `b > 0` 에 의해 b의 값은 최소 1이여야 한다.
-- 조건 `b > 0` 에 의해 b의 값은 최소 1이므로 a의 값은 최대 n-1 이다.
-- length [x| x <- [(a/2 + 1)..n-1] ] === x - (x/2 +1)
main :: IO ()
main = interact $ unlines . map (show . (\n -> n - (n `div` 2 + 1)) . read) . tail . words