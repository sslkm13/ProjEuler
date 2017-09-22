n1 = 1
n2 = 1
i = 2
begin
  next_n = n1 + n2
  i += 1
  n1 = n2
  n2 = next_n
end while next_n.to_s.size < 1000

puts "Answer: #{i}"