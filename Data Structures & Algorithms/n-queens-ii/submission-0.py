class Solution:
    def totalNQueens(self, n: int) -> int:
        col = [False] * n
        posDiag = [False] * (n * 2)
        negDiag = [False] * (n * 2)
        res = 0

        def backtrack(r):
            nonlocal res
            if r == n:
                res += 1
                return
            for c in range(n):
                if col[c] or posDiag[r + c] or negDiag[r - c + n]:
                    continue
                col[c] = True
                posDiag[r + c] = True
                negDiag[r - c + n] = True

                backtrack(r + 1)

                col[c] = False
                posDiag[r + c] = False
                negDiag[r - c + n] = False

        backtrack(0)
        return res