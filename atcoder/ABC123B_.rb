arr = `dd`.split.map(&:to_i).sort_by{|e| e % 10 }
sum = 0
arr.each{|e|
    sum += e + (sum % 10 != 0  ? 10 - (e % 10) : 0)
}
puts sum