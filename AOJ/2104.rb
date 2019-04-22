# Country Road http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2104
# 席の位置：右前

t=gets.to_i
t.times{
    n,k = gets.split.map &:to_i
    x = gets.split.map &:to_i
    # 隣同士の家の距離の差をもつ配列を作る
    d = []
    (0..x.size-2).each{|i|
        d << x[i+1] - x[i]
    }
    # 端から端まで電線を引いた上で2つの家の距離の差が大きいものから順にk-1個分引けば良い
    puts x[-1] - x[0] - d.sort.reverse.slice(0,k-1).sum
}