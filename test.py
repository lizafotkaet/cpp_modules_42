
class Solution: 
    def calcLoss(self, c, g, m) -> int: loss = 0 
        for i in range(0, m): 
            if g[i]: 
                loss = loss + c[i] 
        return loss

    def maxSatisfied(self, customers: list[int], grumpy: list[int], minutes: int) -> int:
        n = len(customers)
        highestLossIndex = 0
        highestLossValue = 0
        for i in range(n):
            if n - i < minutes:
                break
            loss = self.calcLoss(customers[i:i+minutes], grumpy[i:i+minutes], minutes)
            if loss > highestLossValue:
                highestLossValue = loss
                highestLossIndex = i
        grumpy[highestLossIndex:highestLossIndex+minutes] = [0 for happy in range(minutes)]
        res = 0
        for j in range(len(customers)):
            res += customers[j] * (1 if not grumpy[j] else 0)
        return res