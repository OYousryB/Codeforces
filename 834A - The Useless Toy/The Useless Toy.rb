clock_wise = %w{v < ^ >}
counter_clock_wise = %w{v > ^ <}

start, finish = gets.strip.split
n = gets.strip.to_i

start_pos_cw = clock_wise.index start
start_pos_ccw = counter_clock_wise.index start
n %= 4

cw = clock_wise[start_pos_cw + (n - 4)] == finish
ccw = counter_clock_wise[start_pos_ccw + (n - 4)] == finish

if cw && !ccw
    puts "cw"
elsif ccw && !cw
    puts "ccw"
else
    puts "undefined"
end