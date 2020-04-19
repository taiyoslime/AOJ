
n = gets.to_i
p = []
n.times{ p << gets.split.map(&:to_i) }
sum = 0
c = p.pop
p.each_cons(2){ |a,b|
    sum += 0.5 * (a[0] * b[1] + b[0] * c[1] + c[0] * a[1] - b[0] * a[1] - c[0] * b[1] - a[0] * c[1])
}
puts sum.abs