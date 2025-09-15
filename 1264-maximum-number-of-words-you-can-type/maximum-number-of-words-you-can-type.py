class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        cnt = 0
        flag = 0
        words = text.split()
        for word in words:
            flag = 0
            for i in range(len(word)):
                if word[i] in brokenLetters:
                    flag = 1
                    break
            if(flag == 0):
                cnt += 1
        return cnt
        
