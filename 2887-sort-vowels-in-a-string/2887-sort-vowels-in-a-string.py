class Solution:
    def sortVowels(self, s: str) -> str:
        lst = "AEIOUaeiou"
        v = []
        for i in s:
            if i in lst:
                v.append(i)
        res = ""
        k = 0
        v.sort()
        for i in s:
            if i in lst:
                res += v[k]
                k += 1
            else:
                res += i
        return res
