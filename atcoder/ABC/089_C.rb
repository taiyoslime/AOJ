p $<.grep(/^[MARCH]/).group_by{|e|e[0]}.map{|k,v|v.size}.combination(3).map{|e|e.inject:*}.inject(:+)||0
