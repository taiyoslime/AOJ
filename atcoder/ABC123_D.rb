x,y,z,k = gets.split.map &:to_i
a = gets.split.map &:to_i
b = gets.split.map &:to_i
c = gets.split.map &:to_i
ab = a.product(b).map{|l,r| l + r}.sort.reverse
abc = ab[0,k].product(c).map{|l, r| l+r}.sort.reverse
puts abc[0,k]