# 1 安直
s = gets
ans = 0
s.each{|e|
	ans += 1 if s == "1"
}
puts ans

# 2 Array#count
puts gets.count("1")

# 3 Array#sumは使えない
s = gets.chars.map(&:to_i).reduce(:+)

# 4
puts`dd`.count "1"