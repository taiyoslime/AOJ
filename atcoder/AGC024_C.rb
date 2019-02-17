n = gets.to_i
a = []
n.times{a << gets.to_i}
a.reverse!
i = 0
ctn = 0
if a[-1] != 0
    puts "-1"
    exit
end
while i < a.length - 1
    if a[i] != 0
        ar = []
        while a[i] >= a[i+1]
            if a[i] - a[i+1] > 1
                puts "-1"
                exit
            end
            ar << a[i]
            i += 1
            break if i == a.length - 1
        end
        ar << a[i]
        prev = ar[0]
        ctn += prev
        ar.shift
        while ar != []
            if ar.first == prev
                ctn += ar.first
            end
            prev = ar.first
            ar.shift
        end
    end
    i += 1
end
puts ctn
