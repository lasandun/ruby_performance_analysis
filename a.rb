a = Array.new(10000000)
n = 10000000

start = Time.now
n.times.inject(0) { |i|
    a[i] = 0
}
finish = Time.now
puts "time = #{finish - start}"


sum = 0
start = Time.now
n.times.inject(0) { |i|
    sum += a[i]
}
finish = Time.now

puts "time = #{finish - start}"


