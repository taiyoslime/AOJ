s = gets.chomp
t = gets.chomp
cmp = -> a,b { a.size > b.size ? a : b}
dp = Array.new(t.size+1).map{Array.new(s.size+1,"")}
(t.size+1).times{|i|
    (s.size+1).times{|j|
        dp[i+1][j+1] = cmp.(dp[i+1][j+1], dp[i][j] + s[j]) if s[j] == t[i] and j != s.size and i != t.size
        dp[i][j+1] = cmp.(dp[i][j+1], [i][j]) if j != s.size
        dp[i+1][j] = cmp.(dp[i+1][j], dp[i][j]) if i != t.size
    }
}
puts dp[-1][-1]
