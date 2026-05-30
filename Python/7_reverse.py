class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """

        if x < 0:
            sign = -1
        else:
            sign = 1 
        x = abs(x)

        reverse = 0

        while x > 0:
            reverse = reverse * 10 + x % 10
            x //= 10

        reverse *= sign

        if reverse < -2**31 or reverse > 2**31 - 1:
            return 0

        return reverse
