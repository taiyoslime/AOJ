a,b,c,d = gets.split.map &:to_i
l = c * d / c.gcd(d)
puts b - a + 1 - ((b / c + b / d - b / l ) - ((a-1) / c + (a-1) / d - (a-1) / l))