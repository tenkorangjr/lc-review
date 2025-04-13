package main

import (
	"fmt"
	"os"

	"github.com/fatih/color"
	"github.com/lc-review/go-lang/solutions"
)

func main() {
	solutionsMap := map[uint]solutions.Solution{
		80: &solutions.RemoveDuplicateFromSortedArraySolution{},
	}

	if len(os.Args) < 2 {
		fmt.Println("please provide a question number")
		return
	}

	var qNum uint
	fmt.Sscanf(os.Args[1], "%d", &qNum)

	if solution, ok := solutionsMap[qNum]; !ok {
		fmt.Println("Solution does not exist for question number")
	} else {
		if passed := solution.Test(); passed {
			fmt.Printf(color.RedString("FAILED: "), "solution for question %d ", solution.GetQuestionNumber())
		} else {
			fmt.Printf(color.GreenString("PASSED: "), "solution for question %d ", solution.GetQuestionNumber())
		}
	}
}
