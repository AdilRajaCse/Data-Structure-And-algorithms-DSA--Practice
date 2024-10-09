#User function Template for python3
class Solution:
    
    # Note that the size of the array is n-1
    def missingNumber(self, n, arr):
        val = 0

        # XOR all numbers from 1 to n
        for i in range(1, n + 1):
            val ^= i

        # XOR all elements in the array
        for num in arr:
            val ^= num

        return val

#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for _ in range(0, t):
    n = int(input())
    arr = list(map(int, input().split()))
    s = Solution().missingNumber(n, arr)
    print(s)

# } Driver Code Ends