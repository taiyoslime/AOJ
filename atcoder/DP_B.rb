N, K = gets.split.map &:to_i
h = gets.split.map &:to_i
dp = Array.new(N+1,1<<31)
dp[0] = 0
(0..N-2).each{|i|
    (1..K).each{|k|
        if i + k < N
            dp[i+k] = [(h[i+k] - h[i]).abs + dp[i], dp[i+k]].min
        end
    }
}
puts dp[N-1]
