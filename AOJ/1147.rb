loop {
    i = gets.to_i
    break if i == 0
    pt = []
    i.times{pt << gets.to_i }
    puts pt.sort[1,pt.size-2].inject(:+) / (pt.size - 2)
}
