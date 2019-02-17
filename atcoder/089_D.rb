H,W,D,*r=`dd`.split.map &:to_i
d=[0]*(D+1);x=[]
(D+1..H*W).each{|i|d[i]=d[i-D]+((x[i]=x[i]||r.index(i))/W-(x[i-D]=x[i-D]||r.index(i-D))/W).abs+(x[i]%W-x[i-D]%W).abs}
r[H*W+1..-1].each_slice(2){|a,b|puts d[b]-d[a]}