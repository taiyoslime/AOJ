require "rbplotly"

def kosh s,t,n
    if n == 0
        return [s,t]
    else
        rot = -> vertex, sin, cos {
            return [vertex[0] * cos - vertex[1] * sin, vertex[0] * sin + vertex[1] * cos]
        }
        l_sin = (t[1]-s[1]) / Math.sqrt((t[0]-s[0])**2 + (t[1]-s[1])**2)
        l_cos = (t[0]-s[0]) / Math.sqrt((t[0]-s[0])**2 + (t[1]-s[1])**2)
        t_inv = rot.(t,-l_sin,l_cos)

        l = (t_inv[0] - s[0]) / 3.0

        c1_inv = rot.([l, 0],l_sin,l_cos)
        c2_inv = rot.([1.5 * l, l / 2.0 * Math.sqrt(3.0)],l_sin,l_cos)
        c3_inv = rot.([2.0 * l, 0], l_sin, l_cos)

        c1 = [s[0]+c1_inv[0], s[1]+c1_inv[1]]
        c2 = [s[0]+c2_inv[0], s[1]+c2_inv[1]]
        c3 = [s[0]+c3_inv[0], s[1]+c3_inv[1]]

        return (kosh(s,c1,n-1) + kosh(c1,c2,n-1) + kosh(c2,c3,n-1) + kosh(c3,t,n-1)).uniq
    end
end

data = {x:[],y:[]}
result = kosh([0,0],[9,0],0)
result.each{|e|
    puts "#{e[0]} #{e[1]}"
}
