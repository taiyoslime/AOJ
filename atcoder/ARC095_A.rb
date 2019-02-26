N = gets.to_i
X = gets.split.map(&:to_i)
X_s = X.sort
X.each{|e|
    if e <= X_s[N / 2 - 1]
        puts X_s[ N / 2 ]
    else
        puts X_s[ N / 2 - 1 ]
    end
}
