class Solution:
	# @param x: An integer
	# @return: The sqrt of x
	def sqrt(self, x):
		if x == 0 or x == 1:
			return x
		guess = x / 2
		fx = guess * guess - x
		count = 0
		while abs(fx) > 1 and count < 100:
			guess = guess - fx / (2.0 * guess)
			fx = guess * guess - x
			count += 1
		return int(guess)