N, K = gets.split.map &:to_i
S = gets.chop
range = []
i = 0
S.size.times{|e|
    if S[e] == "0"
        i += 1
    else
        range << i if i != 0
        i = 0
    end
}
range << i if S[-1] == "0"
puts range
r = range[0,K].inject(:+)
ans = r + (S[0] == "1" ? K + 1 : K) rescue 1
(range.size - K).times{|e|
    r -= range[e]
    r += range[e+K]
    if e != range.size - K - 1
        ans = [ans, r + K + 1].max
    else
        ans = [ans, r + (S[-1] == "1" ? K + 1 : K) ].max
    end
}
puts ans
