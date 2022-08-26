package main

import "fmt"

func main() {
	var t, x, y, z int
	fmt.Scanln(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&x, &y, &z)
		fmt.Println((x + y) - z)
	}
}
