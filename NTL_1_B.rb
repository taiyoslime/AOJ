M=1000000007
def ps x,n
	return 1 if n==0
	r=ps(x*x%M,n/2)
	r=r*x%M if n%2==1
	r
end
q,w = gets.split.map(&:to_i)
puts ps q,w
