def sum_of_digits(number)
  digits = number.to_s.split("")
  sum = 0
  digits.each do |digit|
    sum += digit.to_i
  end
  return sum
end

###

max_sum = 0

(1..99).each do |a|
  (1..99).each do |b|
    sum = sum_of_digits(a**b)
    if (sum > max_sum)
      max_sum = sum
    end
  end
end

puts "Answer: #{max_sum}"