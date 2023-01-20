main :: IO ()
main = interact $ unlines . map (show . subtract 1 . read) . tail . words