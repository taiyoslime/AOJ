n,k = gets.split.map &:to_i
if k > 0.5 * (n - 1) * (n - 2)
    puts -1
else
    ans = []
    (n-1).times{|e|
        ans << "1 #{e+2}"
    }
    c = 0
    f = 2
    t = 3
    loop {
        break if 0.5 * (n - 1) * (n - 2) - k - c == 0
        ans << "#{f} #{t}"
        t < n ? t += 1 : (f += 1; t = f + 1)
        c += 1
    }
    puts ans.size
    puts ans
end