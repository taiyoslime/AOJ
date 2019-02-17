(100000..10000000).each {|e|
	a = e.to_s(3)
	if (a.size) % 2 == 0
		ch = a.chars*' '
		str = "#{a.size}\n#{ch}\n"
		x = `echo \"#{str}\" | python main.py`.chop
		y = `echo \"#{str}\" | python tooh.py`.chop
		puts "#{x} : #{y}"
		if x != y
			puts str
		end
	end
}
