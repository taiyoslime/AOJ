a,b=gets.split;puts (a..b).reduce(0){|c,e|c+=1 if e==e.reverse;c}
