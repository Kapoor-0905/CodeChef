package main

import "fmt"

func main() {
	var t, x, y, z int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&x, &y, &z)
		if x%y == 0 {
			fmt.Println((x / y) * z)
		} else {
			fmt.Println(((x / y) + 1) * z)
		}
	}
	fmt.Println("")
}
