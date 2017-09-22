numbers = []

(2..100).each do |a|
  (2..100).each do |b|
    numbers << a**b
  end
end

numbers.uniq!
ans=numbers.size

puts "Answer: #{ans}"