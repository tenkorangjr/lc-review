from abc import ABC, abstractmethod

class Solution(ABC):
    @abstractmethod
    def test(self) -> None:
        pass

    def get_description(self) -> str:
        pass

    def get_number(self) -> int:
        pass