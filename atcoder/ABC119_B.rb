n=gets.to_i
sum = 0
n.times{
    a,b = gets.split
    if b == "JPY"
        sum += a.to_f
    else
        sum += a.to_f * 380000
    end
}
p sum
