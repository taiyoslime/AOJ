A, B, Q = gets.split.map &:to_i
s = []
t = []
q = []
A.times{s << gets.to_i}
B.times{t << gets.to_i}
Q.times{q << gets.to_i}
def bin_search val,list
    if val < list[0]
        return [-10**11, list[0]]
    end
    if val > list[-1]
        return [list[-1], 10**11]
    end
    low = 0
    high = list.size-1
    while (high - low > 1)
        if val < list[(high + low) / 2]
            high = (high + low) / 2
        else
            low = (high + low)/ 2
        end
    end
    return [list[low], list[high]]
end
q.each{|x|
    # 頭が悪い

    a_l, a_h = bin_search x,s
    b_1_l, b_1_h = bin_search a_l, t
    b_2_l, b_2_h = bin_search a_h, t

    b_l, b_h = bin_search x,t
    a_1_l, a_1_h = bin_search b_l, s
    a_2_l, a_2_h = bin_search b_h, s

    puts [(x-a_l).abs +  (a_l - b_1_l).abs, (x-a_l).abs + (a_l - b_1_h).abs, (x-a_h).abs + (a_h - b_2_l).abs, (x-a_h).abs + (a_h - b_2_h).abs, (x-b_l).abs +  (b_l - a_1_l).abs, (x-b_l).abs + (b_l - a_1_h).abs, (x-b_h).abs + (b_h - a_2_l).abs, (x-b_h).abs + (b_h - a_2_h).abs ].min
}
