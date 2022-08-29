package main

import (
	"fmt"
	"math"
)

func main() {
	var t, a, b, dif int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&a, &b)
		dif = int(math.Abs(a - b))
		if dif%2 == 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
