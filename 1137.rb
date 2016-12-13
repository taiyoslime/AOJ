ST="mcxi"
def enc i
	s=""
	4.times{|e|(d=i%10)<2?s+=ST[3-e]*d:s+=ST[3-e]+d.to_s;i=(i-d)/10}
	s.reverse
end
def dec s
	i=0;p=1
	s.size.times{|e|(s[e].to_i.zero?)?(i+=10**(3-(ST.index(s[e])))*p;p=1):(p=s[e].to_i)}
	i
end
n=gets.to_i
n.times{a,b=gets.split;puts enc(dec(a)+dec(b))}
