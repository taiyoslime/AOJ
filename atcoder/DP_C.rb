N = gets.to_i
dp = Array.new(N).map{Array.new(3,0)}
N.times{|i|
    h = gets.split.map(&:to_i)
    if i == 0
        dp[i] = h
    else
        3.times{|j|
            3.times{|l|
                if j != l
                    dp[i][j] = [dp[i-1][l] + h[j], dp[i][j]].max
                end
            }
        }
    end
}
puts dp[N-1].max
