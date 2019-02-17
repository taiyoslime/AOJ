a,b = gets.split.map(&:to_i)
if a*b % 2 == 1
	puts "Even"
else
	puts "Odd"
end