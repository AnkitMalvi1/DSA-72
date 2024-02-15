class Solution:
	def isPossible(self, paths):
		for row in paths:
            sum = 0
            for col in row:
                sum = sum + col
            if sum%2 != 0:
                return 0
        return 1
