class Dice
	attr_reader :surface
	def initialize arr
		@surface = arr
	end
	def rotate d
		tmp = @surface.clone
		case d
		when 'N'
			tmp[0]=@surface[1];tmp[1]=@surface[5];tmp[5]=@surface[4];tmp[4]=@surface[0]
		when 'S'
			tmp[0]=@surface[4];tmp[1]=@surface[0];tmp[5]=@surface[1];tmp[4]=@surface[5]
		when 'W'
			tmp[3]=@surface[0];tmp[0]=@surface[2];tmp[2]=@surface[5];tmp[5]=@surface[3]
		when 'E'
			tmp[3]=@surface[5];tmp[0]=@surface[3];tmp[2]=@surface[0];tmp[5]=@surface[2]
		end
		@surface = tmp
	end
end
r = Dice.new gets.split
gets.each_char { |ch| r.rotate ch }
puts r.surface[0]
