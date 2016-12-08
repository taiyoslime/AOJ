gets;d=gets.split.map(&:to_f).zip(gets.split.map(&:to_f)).map{|a,b|(a-b).abs};(1..3).each{|e|puts d.map{|t|t**e}.reduce(:+)**(1.0/e)};puts d.max
