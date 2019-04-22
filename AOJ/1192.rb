# Tax Rate Changed(1192) http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1192
# 教室位置：右前

tax = ->(x, t){
     (x + x * t * 0.01).to_i
}

# 当初はこのように税適用後の価格からもとの価格の最大値を計算するものを利用していたがs < 1000なので全探索に切り替えた
=begin
tax_inv = -> (x, t){
    a = (x+1) / (1 + t * 0.01)
    a - a.to_i == 0 ? a.to_i - 1: a.to_i
}
=end

loop {
    a, b, c = gets.split.map(&:to_i)
    break if a == 0
    ans = -1
    (1..c).each{|x|
        (1..c).each{ |y|
            ans = [ans, tax[x,b] + tax[y,b]].max if tax[x,a] + tax[y,a] == c
        }
    }
    puts ans
}