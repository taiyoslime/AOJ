require "rbplotly"

def kosh s,t,n
    if n == 0
        return [s,t]
    else
        lx = (t[0]-s[0]) / 3.0
        ly = (t[1]-s[1]) / 3.0
        l = Math.sqrt(lx ** 2 + ly ** 2)
        c1 = [s[0] + lx, s[1] + ly]
        c2 = [s[0] + (1.5 * l) * (l / lx) - (l / 2.0 * Math.sqrt(3.0)) *  (l / ly), s[1] + (1.5 * l) * (l / ly) + (l / 2.0 * Math.sqrt(3.0)) * (l / lx)]
        c3 = [s[0] + lx * 2.0 , s[1] + ly * 2.0]
        return (kosh(s,c1,n-1) + kosh(c1,c2,n-1) + kosh(c2,c3,n-1) + kosh(c3,t,n-1)).uniq
    end
end

data = {x:[],y:[]}
result = kosh([0,0],[9,0],2)
result.each{|e|
    puts "#{e[0]} #{e[1]}"
}