N = gets.to_i
h = gets.split.map &:to_i 
dp = Array.new(N+1,1<<31)
dp[0] = 0
(0..N-2).each{|i|
    dp[i+1] = [(h[i+1] - h[i]).abs + dp[i], dp[i+1]].min
    if i + 2 < N
        dp[i+2] = [(h[i+2] - h[i]).abs + dp[i], dp[i+2]].min
    end
}
puts dp[N-1]
