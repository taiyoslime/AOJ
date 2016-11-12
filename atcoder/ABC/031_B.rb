l,h = gets.split.map(&:to_i)
n = gets.to_i
n.times {
	s = gets.to_i
	puts (s<=l)?(l-s):((s<=h)?0:-1)
}
