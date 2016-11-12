a,b = gets.split.map(&:to_i)
puts (a>b)?a*(b+1):(a+1)*b
