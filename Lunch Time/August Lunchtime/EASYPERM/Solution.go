package main

import "fmt"

func main() {
	var t, n int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&n)
		for j := n; j >= 1; j-- {
			fmt.Println(j)
		}
	}
}
