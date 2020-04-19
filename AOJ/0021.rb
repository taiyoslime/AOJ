# 0021 Polygon  (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0021&lang=jp)
# 所要時間:15分
# 座席:欠席
n = gets.to_i
n.times{
    p = gets.split.map(&:to_f)
    puts ((p[2] - p[0]) * (p[7] - p[5]) - (p[3] - p[1]) * (p[6] - p[4])).abs < 1e-11 ? "YES" : "NO"
}