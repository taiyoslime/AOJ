N, M = gets.split.map &:to_i
A = gets.split.map &:to_i
c = [0,2,5,5,4,5,6,3,7,6]
dp=[0]
N.times{|i|
    A.each{|e|
        if dp[i] != nil
            dp[i + c[e]] = [dp[i + c[e]] || 0 ,  dp[i] * 10 + e].max
        end
    }
}
p dp[N]
