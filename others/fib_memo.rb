# フィボナッチ数列を求めるアルゴリズムを愚直再帰，メモ化再帰，for文でそれぞれ書き実行速度を比較する
# 所要時間: 合計20分
# 座席:右前

memo = []
fib = -> (n){
    return memo[n] if memo[n]
    return 0 if n == 0
    return 1 if n == 1
    memo[n] = fib.(n - 2) + fib.(n - 1)
    fib.(n - 2) + fib.(n - 1)
}
puts fib.(ARGV[0].to_i)