p = $<.map{|e| e.split(",").map(&:to_f) }
sum = 0
c = p.pop
p.each_cons(2){ |a,b|
    sum += 0.5 * (a[0] * b[1] + b[0] * c[1] + c[0] * a[1] - b[0] * a[1] - c[0] * b[1] - a[0] * c[1])
}
puts sprintf("%.6f" , sum.abs )