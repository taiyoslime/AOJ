- フィボナッチ数列を求めるアルゴリズムを愚直再帰，メモ化再帰，for文でそれぞれ書き実行速度を比較する
- 所要時間:20分
- 座席:右前

- 愚直再帰: `fib.rb`, メモ化再帰: `fib_memo.rb`, for文: `fib_for.rb` にそれぞれ記述した．
- 結果
1. 35項目までを求める
```
$ time ruby fib.rb 35
9227465
ruby fib.rb 35  4.53s user 0.08s system 98% cpu 4.685 total

$ time ruby fib_memo.rb 35
9227465
ruby fib_memo.rb 35  0.10s user 0.05s system 89% cpu 0.173 total

$ time ruby fib_for.rb 35
9227465
ruby fib_for.rb 35  0.11s user 0.06s system 86% cpu 0.195 total
```

2. 1000項目までを求める
```
# fib.rbは10秒以内に終わらず

$ time ruby fib_memo.rb 1000
43466557686937456435688527675040625802564660517371780402481729089536555417949051890403879840079255169295922593080322634775209689623239873322471161642996440906533187938298969649928516003704476137795166849228875
ruby fib_memo.rb 1000  0.11s user 0.06s system 88% cpu 0.185 total

$ time ruby fib_for.rb 1000
43466557686937456435688527675040625802564660517371780402481729089536555417949051890403879840079255169295922593080322634775209689623239873322471161642996440906533187938298969649928516003704476137795166849228875
ruby fib_for.rb 1000  0.10s user 0.05s system 87% cpu 0.181 total
```

3. 10000項目までを求める
```
$ time ruby fib_memo.rb 10000
(snip)
ruby fib_memo.rb 10000  0.14s user 0.07s system 91% cpu 0.225 total

$ time ruby fib_for.rb 10000
(snip)
ruby fib_for.rb 10000  0.11s user 0.06s system 88% cpu 0.191 total
```

4. 100000項目までを求める
```
# fib_memo.rbは20000付近でSystemStackErrorで停止するようになった

$ time ruby fib_for.rb 100000
(snip)
ruby fib_for.rb 100000  0.31s user 0.12s system 93% cpu 0.464 total
```

