n = gets.to_i
a = gets.split.map(&:to_i).sort
s = 10 ** 10
ans = 0
(a.size-1).times{|e|
    if  s >= ((a[-1]/2).to_i - a[e]).abs
        s = ((a[-1]/2).to_i - a[e]).abs
        ans = a[e]
    end
}
puts "#{a[-1]} #{ans}"
