a,b=gets,gets
c,d=a.size,b.size
dp=Array.new(c){Array.new(d,0)}
c.times{|i|dp[i][0]=i}
d.times{|i|dp[0][i]=i}
(c-1).times {|i|
	(d-1).times{|j|
		dp[i+1][j+1]=(a[i]==b[j]?dp[i][j]:[dp[i][j],dp[i+1][j],dp[i][j+1]].min+1)
	}
}
puts dp[c-1][d-1]
