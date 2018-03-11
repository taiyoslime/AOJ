while (n,r = gets.split.map(&:to_i)) != [0,0]
	a = [*1..n].reverse
	r.times {
		p,c = gets.split.map(&:to_i)
		a = a.slice!(p-1,c)+a
	}
	puts a[0]
end
