class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        from collections import Counter
        
        len1, len2 = len(s1), len(s2)
        if len1 > len2:
            return False
        
        # Frequency count of s1
        count1 = Counter(s1)
        # Frequency count of the first window in s2
        count2 = Counter(s2[:len1])
        
        # Check the first window
        if count1 == count2:
            return True
        
        # Slide the window across s2
        for i in range(len1, len2):
            # Add the new character to the window
            count2[s2[i]] += 1
            # Remove the character that is no longer in the window
            count2[s2[i - len1]] -= 1
            if count2[s2[i - len1]] == 0:
                del count2[s2[i - len1]]
            
            # Compare frequency counts
            if count1 == count2:
                return True
        
        return False
