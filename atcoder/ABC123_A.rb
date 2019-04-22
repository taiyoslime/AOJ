*a,k = `dd`.split.map &:to_i
a.sort!
if a[4] - a[0] > k
    puts ":("
else
    puts "Yay!"
end