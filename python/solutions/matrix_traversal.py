from typing import List
from solutions.solution import Solution

class RotateImage(Solution):
    def __init__(self):
        super().__init__()

    def __solution(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        for col in range(n//2):
            for row in range(col, n - col - 1):
                matrix[col][~row], matrix[~row][~col], matrix[~col][row], matrix[row][col] = matrix[row][col], matrix[col][~row], matrix[~row][~col], matrix[~col][row]

    def test(self) -> None:
        def test(matrix):
            # Test 1
            print("Input:")
            for row in matrix:
                print(f"{row}")

            self.__solution(matrix)

            print("Output:")
            for row in matrix:
                print(f"{row}")
        
        matrix: List[List[int]] = [[1,2,3],[4,5,6],[7,8,9]]
        test(matrix)

        matrix: List[List[int]] = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
        test(matrix)
        
    def get_description(self):
        outputString = """You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise) in-place.
"""
        return outputString

    def get_number(self) -> int:
        return 48

