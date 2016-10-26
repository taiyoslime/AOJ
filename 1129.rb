while (n,r = gets.split.map(&:to_i)) != [0,0]
	a = [*1..n].reverse
	r.times {
		p,c = gets.split.map(&:to_i)
		a = a.slice!(p-1,c)+a
	}
	puts a[0]
end

#while (n,r = gets.split.map(&:to_i))!=[0,0] ; a=n.downto(1).to_a;r.times{p,c=gets.split.map(&:to_i);a=a.slice!(p-1,c).concat(a)};puts a[0]

#突然のメッセージ失礼致します。
#本日の17:30~18:30頃に夢大陸でGroove Coasterをプレイさせて頂いていたものです。
#僭越ながら要望なのですが、現在のグルコスの左のブースターがスライドの巻き込みと呼ばれる ブースターが緩いことによって起きる誤反応がたまに起きてしまっているということと、右に比べてその左のブースターが非常に緩いため左右の硬さのバランスが異なりスライド入力時に違和感を感じました。もし良かったらその左ブースターのメンテナンスをしていただけると幸いです。宜しくお願い致します。
