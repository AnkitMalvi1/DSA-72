class Solution:
    def decimalValue(self, head):
        MOD=10**9+7
        # Code here
        decimal_value = 0

        # Traverse the binary linked list
        while head:
            # Update the result by left-shifting and adding the current binary digit
            decimal_value = (decimal_value * 2 + head.data) % MOD
            # Move to the next node in the linked list
            head = head.next

        # Return the final decimal value
        return decimal_value
